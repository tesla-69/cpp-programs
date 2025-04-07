#include <bits/stdc++.h>
using namespace std;

struct HandResult {
    string hand_name;
    vector<string> selected_cards;
};

bool is_face_card(char c) {
    return c >= 'A' && c <= 'Z';
}

int face_card_value(char c) {
    return (c == 'J') ? 11 :
           (c == 'Q') ? 12 :
           (c == 'K') ? 13 : 14;
}

char value_to_face_card(int value) {
    return (value == 11) ? 'J' :
           (value == 12) ? 'Q' :
           (value == 13) ? 'K' : 'A';
}

void add_card(pair<int, char>& card, vector<string>& selected) {
    string card_str = (card.first <= 10) ? to_string(card.first) : string(1, value_to_face_card(card.first));
    card_str.push_back(card.second);
    selected.push_back(card_str);
}

HandResult evaluate_hand(vector<string>& hand) {
    HandResult result;
    vector<string> selected;
    int hand_size = hand.size();
    vector<pair<int, char>> cards(hand_size);

    for (int i = 0; i < hand_size; i++) {
        int card_length = hand[i].size();
        cards[i].second = hand[i][card_length - 1];
        char first_char = hand[i][0];
        cards[i].first = is_face_card(first_char) ? face_card_value(first_char) : stoi(hand[i].substr(0, card_length - 1));
    }

    unordered_map<char, int> suit_count;
    map<int, int, greater<int>> rank_count;

    for (auto& card : cards) {
        suit_count[card.second]++;
        rank_count[card.first]++;
    }

    // Check for full house (three of a kind and a pair)
    int triple_rank = 0, pair_rank = 0;
    for (auto& rank : rank_count) {
        if (rank.second >= 3 && triple_rank == 0) {
            triple_rank = rank.first;
        } else if (rank.second >= 2 && pair_rank == 0) {
            pair_rank = rank.first;
        }
    }
    if (triple_rank && pair_rank) {
        result.hand_name = "Full House";
        int triple_count = 0, pair_count = 0;
        for (auto& card : cards) {
            if ((card.first == pair_rank && pair_count < 2) || (card.first == triple_rank && triple_count < 3)) {
                add_card(card, selected);
                if (card.first == pair_rank) pair_count++;
                if (card.first == triple_rank) triple_count++;
            }
        }
        result.selected_cards = selected;
        return result;
    }

    // Check for flush (five cards of the same suit)
    char flush_suit = 'A';
    for (auto& suit : suit_count) {
        if (suit.second >= 5 && flush_suit < suit.first) {
            flush_suit = suit.first;
        }
    }
    if (flush_suit != 'A') {
        result.hand_name = "Flush";
        for (auto& card : cards) {
            if (card.second == flush_suit && selected.size() < 5) {
                add_card(card, selected);
            }
        }
        result.selected_cards = selected;
        return result;
    }

    // Check for straight (five consecutive ranks)
    sort(cards.begin(), cards.end());
    int consecutive_count = 1, max_consecutive = 1, start_index = 0;
    for (int i = 1; i < cards.size(); i++) {
        if (cards[i].first == cards[i - 1].first + 1) {
            consecutive_count++;
        } else if (cards[i].first != cards[i - 1].first) {
            consecutive_count = 1;
            start_index = i;
        }
        max_consecutive = max(consecutive_count, max_consecutive);
        if (max_consecutive >= 5) break;
    }
    if (max_consecutive >= 5) {
        result.hand_name = "Straight";
        for (int i = start_index; i < start_index + 5; i++) {
            add_card(cards[i], selected);
        }
        result.selected_cards = selected;
        return result;
    }

    // Check for three of a kind
    if (triple_rank) {
        result.hand_name = "Three of a Kind";
        int triple_count = 0;
        for (auto& card : cards) {
            if (card.first == triple_rank && triple_count < 3) {
                add_card(card, selected);
                triple_count++;
            }
        }
        result.selected_cards = selected;
        return result;
    }

    // Check for pair
    if (pair_rank) {
        result.hand_name = "Pair";
        int pair_count = 0;
        for (auto& card : cards) {
            if (card.first == pair_rank && pair_count < 2) {
                add_card(card, selected);
                pair_count++;
            }
        }
        result.selected_cards = selected;
        return result;
    }

    // Single card (highest rank)
    result.hand_name = "High Card";
    add_card(cards[0], selected);
    result.selected_cards = selected;
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<string> hand(n);
    for (auto& card : hand) {
        cin >> card;
    }
    HandResult res = evaluate_hand(hand);
    cout << res.hand_name << endl;
    for (auto& card : res.selected_cards) {
        cout << card << " ";
    }
    cout << endl;
}
