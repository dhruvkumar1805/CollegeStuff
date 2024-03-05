#include <iostream>
#include <vector>
#include <string>

class Product
{
public:
    Product(std::string name, double price) : name(name), price(price) {}

    std::string getName() const
    {
        return name;
    }

    double getPrice() const
    {
        return price;
    }

private:
    std::string name;
    double price;
};

class User
{
public:
    User(std::string username) : username(username) {}

    std::string getUsername() const
    {
        return username;
    }

    void addToCart(const Product &product)
    {
        cart.push_back(product);
    }

    void viewCart() const
    {
        std::cout << "Shopping Cart for " << username << ":\n";
        for (const auto &product : cart)
        {
            std::cout << "- " << product.getName() << " ($" << product.getPrice() << ")\n";
        }
        std::cout << "Total: $" << calculateTotal() << "\n";
    }

private:
    std::string username;
    std::vector<Product> cart;

    double calculateTotal() const
    {
        double total = 0.0;
        for (const auto &product : cart)
        {
            total += product.getPrice();
        }
        return total;
    }
};

int main()
{
    Product laptop("Laptop", 999.99);
    Product phone("Smartphone", 499.99);

    User user1("User1");
    User user2("User2");

    user1.addToCart(laptop);
    user1.addToCart(phone);

    user2.addToCart(phone);

    user1.viewCart();
    user2.viewCart();

    return 0;
}