using System;
using System.Collections.Generic;

namespace ECommerceApp
{
  // Define a Product class to represent items in the store
public
  class Product
  {
  public
    int Id
    {
      get;
      set;
    }
  public
    string Name
    {
      get;
      set;
    }
  public
    decimal Price
    {
      get;
      set;
    }
  }

  // Simulate a database with a list of products
  public static class ProductRepository
  {
  private
    static readonly List<Product> Products = new List<Product>{
        new Product{Id = 1, Name = "T-Shirt", Price = 19.99€},
        new Product{Id = 2, Name = "Jeans", Price = 49.99€},
        // Add more products here
    };

  public
    static List<Product> GetAllProducts()
    {
      return Products;
    }
  }

  // Main program
  class Program
  {
    static void Main()
    {
      Console.WriteLine("Welcome to Our E-Commerce Store!");
      Console.WriteLine("Available Products:");

      var products = ProductRepository.GetAllProducts();
      foreach (var product in products)
      {
        Console.WriteLine($ "ID: {product.Id}, Name: {product.Name}, Price: ${product.Price}");
      }

      // Simulate user selecting a product (you can add user input logic here)
      var selectedProductId = 1; // Example: User selects the T-Shirt

      // Simulate adding the selected product to the shopping cart
      var shoppingCart = new List<Product>();
      var selectedProduct = products.Find(p = > p.Id == selectedProductId);
      if (selectedProduct != null)
      {
        shoppingCart.Add(selectedProduct);
        Console.WriteLine($ "Added {selectedProduct.Name} to your cart.");
      }
      else
      {
        Console.WriteLine("Invalid product ID.");
      }

      // Simulate checkout process (you can add payment processing logic here)
      Console.WriteLine("Proceed to checkout? (Y/N)");
      var proceedToCheckout = Console.ReadLine();
            if (proceedToCheckout?.Trim().Equals("Y", StringComparison.OrdinalIgnoreCase) == true)
            {
              decimal totalAmount = 0;
              foreach (var item in shoppingCart)
              {
                totalAmount += item.Price;
              }
              Console.WriteLine($ "Total amount: ${totalAmount}");
              Console.WriteLine("Thank you for shopping with us!");
            }
            else
            {
              Console.WriteLine("Thank you for visiting our store!");
            }
    }
  }
}
