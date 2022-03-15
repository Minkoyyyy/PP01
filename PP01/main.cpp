#include <iostream>
#include <string>

using namespace std;
bool is_game_running = false;

class GameObject
{
public:
	GameObject()
	{
		cout << "게임오브젝트 생성!\n";
	}
	virtual~GameObject()
	{
		cout << "게임오브젝트 소멸!\n";
	}

	virtual void Start()
	{
		"게임오브젝트 스타트!\n";
	}
	virtual void Update()
	{
		"게임오브젝트 업데이트!\n";
	}
	

};

class Player : public GameObject
{
public:

	int HP = 100;
	Player()
	{
		cout << "정민교 생성!!!\n";
	}

	~Player()
	{
		cout << "정민교 소멸!!!\n";
	}

	void Start()
	{
		cout << "정민교의 HP는" << HP << "입니다\n";
	}
	void Update()
	{
		cout << "정민교 업데이트!!!\n";
	}
};

class Enemy : public GameObject
{
public:
 
	int HP = 100;
	Enemy()
	{
		cout << "이지원 생성!!!\n";
	}

	~Enemy()
	{
		cout << "이지원 소멸!!!\n";
	}

	void Start()
	{
		cout << "이지원의 HP는" << HP << "입니다\n";
	}
	void Update()
	{
		cout << "이지원 업데이트!!!\n";
	}
};

int main()
{
	is_game_running = true;

	GameObject* p = new Player();
	GameObject* e = new Enemy();

	p->Start();
	e->Start();

	while (is_game_running)
	{
		p->Update();
		e->Update();

		cout << "입력해주세요 (1:게임 종료 , 2: 게임 계속):";
		int input;
		cin >> input;
		if (input == 1)
			is_game_running = false;
	}

	delete(p);
	delete(e);

	return 0;
}










/*namespace normal
{
	void print(string str)
	{
		std::cout << str;
	}
}
namespace visual_novel
{
	void print(string str)
	{
		cout << "정민교 : " << str;
	}
}

using namespace visual_novel;

int main()
{
	visual_novel::print("19학번 정민교입니다.\n");
	return 0;
}*/