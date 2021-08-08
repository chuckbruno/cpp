#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>


struct Review
{
    std::string title;
    int rating;
    double price;
};


bool operator<(const std::shared_ptr<Review> r1, const std::shared_ptr<Review> r2);
bool worseThan(const std::shared_ptr<Review> r1, const std::shared_ptr<Review> r2);
bool titleUp(const std::shared_ptr<Review> r1, const std::shared_ptr<Review> r2);
bool titleDown(const std::shared_ptr<Review> r1, const std::shared_ptr<Review> r2);
bool priceUp(const std::shared_ptr<Review> r1, const std::shared_ptr<Review> r2);
bool priceDown(const std::shared_ptr<Review> r1, const std::shared_ptr<Review> r2);
bool FillReview(std::shared_ptr<Review> rePtr);
void ShowReview(std::shared_ptr<Review> rr);
std::shared_ptr<Review> createReview();


int main()
{
    using namespace std;

    // vector<Review> books;
    vector<shared_ptr<Review>> books;
    // Review temp;
    std::shared_ptr<Review> rePtr (new Review);
    while(FillReview(rePtr))
    {
        books.push_back(rePtr);
        rePtr = createReview();
    }


    if(books.size() > 0)
    {
        cout << "Thank you. You entered the following " << books.size() << " ratings:\n" << "Rating\tBook\n";
        for_each(books.begin(), books.end(), ShowReview);

        sort(books.begin(), books.end());
        cout << "Sorted by title: \nRating\tPrice\tBook\n";
        for_each(books.begin(), books.end(), ShowReview);

        sort(books.begin(), books.end(), titleUp);
        cout << "Sorted by title in asce order: \nRating\tPrice\tBook\n";
        for_each(books.begin(), books.end(), ShowReview);

        sort(books.begin(), books.end(), titleDown);
        cout << "Sorted by title in dest order: \nRating\tPrice\tBook\n";
        for_each(books.begin(), books.end(), ShowReview);


        sort(books.begin(), books.end(), priceUp);
        cout << "Sorted by price in asce order: \nRating\tPrice\tBook\n";
        for_each(books.begin(), books.end(), ShowReview);

        sort(books.begin(), books.end(), priceDown);
        cout << "Sorted by price in dest order: \nRating\tPrice\tBook\n";
        for_each(books.begin(), books.end(), ShowReview);

        sort(books.begin(), books.end(), worseThan);
        cout << "Sorted by rating: \nRating\tPrice\tBook\n";
        for_each(books.begin(), books.end(), ShowReview);

        random_shuffle(books.begin(), books.end());
        cout << "After shuffing: \nRating\tPrice\tBook\n";
        for_each(books.begin(), books.end(), ShowReview);
    }
    else
        cout << "No entries. ";

    cout << "Bye.\n";
    return 0;
}


bool operator<(const std::shared_ptr<Review> r1, const std::shared_ptr<Review> r2)
{
    if (r1->title < r2->title)
        return true;
    else if (r1->title == r2->title && r1->rating < r2->rating)
        return true;
    else if (r1->title == r2->title && r1->rating == r2->rating && r1->price < r2->price)
        return true;
    else
        return false;
}


bool worseThan(const std::shared_ptr<Review> r1, const std::shared_ptr<Review> r2)
{
    if (r1->rating < r2->rating)
        return true;
    else
        return false;
}


std::shared_ptr<Review> createReview()
{
    return std::shared_ptr<Review>(new Review);
}


bool FillReview(std::shared_ptr<Review> rePtr)
{
    std::cout << "Enter book title (quit to quit): ";
    std::getline(std::cin, rePtr->title);

    if(rePtr->title == "quit")
        return false;

    std::cout << "Enter book rating: ";
    std::cin >> rePtr->rating;
    if(!std::cin)
        return false;

    std::cout << "Enter book price: ";
    std::cin >> rePtr->price;
    if(!std::cin)
        return false;

    while(std::cin.get() != '\n')
        continue;

    return true;

}


void ShowReview(std::shared_ptr<Review> rr)
{
    std::cout << rr->rating << "\t" << rr->price << "\t" << rr->title << std::endl;
}

bool titleUp(const std::shared_ptr<Review> r1, const std::shared_ptr<Review> r2)
{
    if (r1->title < r2->title)
        return true;
    else
        return false;
}


bool titleDown(const std::shared_ptr<Review> r1, const std::shared_ptr<Review> r2)
{
    if (r1->title > r2->title)
        return true;
    else
        return false;
}

bool priceUp(const std::shared_ptr<Review> r1, const std::shared_ptr<Review> r2)
{
    if (r1->price < r2->price)
        return true;
    else
        return false;
}


bool priceDown(const std::shared_ptr<Review> r1, const std::shared_ptr<Review> r2)
{
    if (r1->price > r2->price)
        return true;
    else
        return false;
}