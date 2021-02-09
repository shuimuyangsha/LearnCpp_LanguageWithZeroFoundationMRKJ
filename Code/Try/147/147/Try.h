class CTeacher;
class CHeadMaster;


class CHeadMaster {
public:
	void SetSalary(CTeacher&);
};

class CTeacher {
public:
	CTeacher(const int salary);
	int GetSalary();
private:
	int salary;
	friend void CHeadMaster::SetSalary(CTeacher&);
};

