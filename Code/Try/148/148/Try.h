class CAccount;
class CManager;


class CManager {
public:
	void SetPassword(CAccount&, const char *);
};

class CAccount {
public:
	CAccount(const char * password);
	void OutputPassword();
	char pass[64];
	friend void CManager::SetPassword(CAccount&, const char *);
};

