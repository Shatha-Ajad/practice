#include <iostream>
#include <string>

class Warlock{
	private: 
		std::string _name;
		std::string _title;
		Warlock();
		Warlock (const Warlock &copy);
		const Warlock &operator=(const Warlock &copy);
	public:
		~Warlock();
		Warlock (const std::string &name, const std::string &title);
		const std::string &getName() const;
		const std::string &getTitle() const;
		void introduce() const;
		void setTitle (const std::string &title);

};