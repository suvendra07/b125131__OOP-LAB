#include <iostream>

using namespace std;

class Recommender {
public:
    virtual void generateRecommendation(int userRating, int popularity) {
        cout << "Base recommendation engine." << endl;
    }
};

class PersonalizedRecommender : public Recommender {
public:
    void generateRecommendation(int userRating, int popularity) override {
        double score = 0.7 * userRating + 0.3 * popularity;
        cout << "Personalized Recommendation Score: " << score << endl;
    }
};

class TrendingRecommender : public Recommender {
public:
    void generateRecommendation(int userRating, int popularity) override {
        double score = 0.3 * userRating + 0.7 * popularity;
        cout << "Trending Recommendation Score: " << score << endl;
    }
};

int main() {
    int rating, popularity;
    cout << "Enter user rating (0-100): ";
    cin >> rating;
    cout << "Enter popularity score (0-100): ";
    cin >> popularity;
    
    Recommender* recPtr;
    
    PersonalizedRecommender personalized;
    TrendingRecommender trending;
    
    recPtr = &personalized;
    recPtr->generateRecommendation(rating, popularity); 
    
    recPtr = &trending;
    recPtr->generateRecommendation(rating, popularity); 
    
    return 0;
}