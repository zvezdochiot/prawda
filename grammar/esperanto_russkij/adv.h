/************************************************************************/
//            ��������� �������
// (����� ���� ���������� ��_�������0 � ��_�������0� ? )
/************************************************************************/
@�������
{
   @�����     ��_�������_� = 
              �������( &S )
	      ��_�������_�� ;
   @�����     ��_�������_� = 
              ������� 
	      ��_�������_�� ;
}
@�������
{
   @��������� ��_�������0 = _Ne _�������_������� ��_�������_� ;
   @��������� ��_�������0 = _Ne _�������_������� ��_�������_� ;
}
@�������
{
   @��������� ��_�������1 = ��_�������0 @0[ol]  ��_���_� ;
   @��������� ��_�������1 = ��_�������0 @0[���] ��_���_�(%�) ;
}
@�������
{
   @��������� ��_�������2 = _Ne @0[tiel]      �������( &S ) @0[por] @0[ke] inf ;
   @��������� ��_�������2 = _Ne @0[���������] �������       @0[�����]      inf ;
}
@�������
{
   @��������� ��_�������3 = _Ne @0[tiel] @0[kiel] �����_������ ;
   @��������� ��_�������3 = _Ne @0[���_���]       �����_������ ;
}
@�������
{
   @��������� ��_�������4 = _Ne @0[kiel] �����_������ ;
   @��������� ��_�������4 = _Ne @0[���]  �����_������ ;
}
@�������
{
   @��������� ��_�������5 = _Ne @0[same] @0[kiel] ��_���_� ;
   @��������� ��_�������5 = _Ne @0[���_��_���]    ��_���_�(%�) ;
}
@�������
{
   @��������� ��_�������6 = _Ne @0[kiam]  �����_������ ;
   @��������� ��_�������6 = _Ne @0[�����] �����_������ ;
}
@�������
{
   @��������� ��_�������7 = _Ne @0[tiel] @0[ke] �����_������ ;
   @��������� ��_�������7 = _Ne @0[���_�����]   �����_������ ;
}
@�������
{
   @��������� ��_�������8 = _Ne @0[kiel] �������_��� ;
   @��������� ��_�������8 = _Ne @0[���]  �������_��� ;
}
@�������
{
   @��������� ��_�������9 = _Ne @0[tiel] �����_����� ;
   @��������� ��_�������9 = _Ne @0[���]  �����_����� ;
}
@�������
{
   @��������� ��_�������10 = 
              _Ne ��_������( %������������, @0, @0, @0 ) ����� ;
   @��������� ��_�������10 = 
              _Ne ��_������( %�����, %������������, @0,@0,@0,@0,@0,@0 ) ����� ;
}
@�������
{  // �� ���� ����, ��� ��������������
   @�����     ��_������� =
	      ��_�������0
              ��_�������1
	      ��_�������2
	      ��_�������3
	      ��_�������4 
	      ��_�������5
	      ��_�������6 
	      ��_�������7 
	      ��_�������8
	      ��_�������9
	      ��_�������10
	      ;
   @�����     ��_������� =
	      ��_�������0
              ��_�������1
	      ��_�������2
	      ��_�������3
	      ��_�������4 
	      ��_�������5
	      ��_�������6 
	      ��_�������7 
	      ��_�������8
	      ��_�������9
	      ��_�������10
	      ;
}
// ----------------------------------------------------------------------------
//         �������_���
// ----------------------------------------------------------------------------
@�������
{
   @��������� �������_���_� = _Ne �������( %� )     ��_���_� ;
   @��������� �������_���_� = _Ne �������( &����� ) ��_���_�( ����� ) ;
}
@�������
{
   @��������� �������_���_� = _Ne �������( %� )     ��_���_�� ;
   @��������� �������_���_� = _Ne �������( &����� ) ��_���_��( ����� ) ;
}
@�������
{
   @�����     �������1_��� = �������_���_�  �������_���_� ;
   @�����     �������1_��� = �������_���_�  �������_���_� ;
}
@�������
{  // el sub la tero = �� ��� ����� 
   @��������� �������2_��� = _Ne �������( @0 )     �������_���1 ;
   @��������� �������2_��� = _Ne �������( &����� ) �������_���1 ;
}
@�������
{
   @�����     �������_���1 = �������1_���  �������2_��� ;
   @�����     �������_���1 = �������1_���  �������2_��� ;
}
@�������
{
   @��������� �_�������_��� = _�_��� �������_���1 ;
   @��������� �_�������_��� = _�_��� �������_���1 ;
}
@�������
{
   @�����     _�_�������_��� = �_�������_��� @00 ;
   @�����     _�_�������_��� = �_�������_��� @00 ;
}
@�������
{  
   @���������  �������_��� = �������_���1  _�_�������_��� ;
   @���������  �������_��� = �������_���1  _�_�������_��� ;
}

@�������
{  
   @���������  ����_inf = ����_��������������  inf ;
   @���������  ����_inf = ����_��������������  inf ;
}


// ----------------------------------------------------------------------------
//         ��������������
// ----------------------------------------------------------------------------
@�������
{
   @�����2     ��������������1 =
               �������_���1
	       ��_�������
	       ����_inf
	       �����_��������������
	       �����_�����
	       ������_�_��������������_��	       
	       ;
   @�����2     ��������������1 =
               �������_���1
	       ��_�������
	       ����_inf
	       �����_��������������
	       �����_�����
	       ������_�_��������������_��
	       ;
}
@�������
{
   @���������  ��������������2 = ��������������1 _�_���  _�������������� ;
   @���������  ��������������2 = ��������������1 _�_���  _�������������� ;
}
@�������
{
   @���������  ��������������_�� = @0[cxu] ��������������1 _�������������� ;
   @���������  ��������������_�� =         ��������������1 _�������������� ;
}
@�������
{
   @�����     _�������������� = ��������������2 @00 ;
   @�����     _�������������� = ��������������2 @00 ;
}
// ----------------------------------------------------------------------------
//             �������������� ��� ����������� � ����������
// ----------------------------------------------------------------------------
@�������
{
   @�����      ��������������_�1 =
	       ��_�������
	       �����_��������������
	       �����_�����
	       ;
   @�����      ��������������_�1 =
	       ��_�������
	       �����_��������������
	       �����_�����
	       ;
}
@�������
{
   @���������  ��������������_�2 = ��������������_�1 _��������������_� ;
   @���������  ��������������_�2 = ��������������_�1 _��������������_� ;
}
@�������
{
   @�����     _��������������_� = ��������������_�2 @00 ;
   @�����     _��������������_� = ��������������_�2 @00 ;
}