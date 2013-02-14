#ifndef	_PY_DEF_H_
#define _PY_DEF_H_

#ifdef 	PY_DEF_GLOBALS
#define	PY_DEF_EXT
#else
#define  PY_DEF_EXT  extern
#endif


typedef struct{
	const char *PYList;  	//ƴ�������ַ���
	int			num;		//�ܺ�����
	const char *HZGB;		//���������ƴ����ϵĺ���GB���ָ��
}PinYinDef;


//ƴ����ϵĺ����ֿ�
//ƴ�������Ľṹ��
const struct PinYinPCB{
const unsigned char *PYSerList;  		//ƴ�������ַ�
const unsigned char *PYRankOneList;  	//���������ƴ����ϵĺ����ֿ��ָ��
};

/******************************************************************************
**	����:	_py_init();
**	����:	���뷨��ʼ��
**	����:	��
**	����:	��
**	˵��:	��
******************************************************************************/
PY_DEF_EXT void _py_init(void);


#endif   /* end */