// *************************************************************************
//
//            ������ ��������������� ��� ������_be
//
//            ��_����
// *************************************************************************

@�������
{
   @�����     ����_������ =
              ����( %������ )
	      ����( %������ ) ;
   @�����     ����_������( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
              ����( ���, ����, �����, ����� )
	      ����( ���, ����, �����, ����� ) ;
}
@�������
{             // ������� of you = � ����� �������...
   @��������� ������_of_��� = @0[of]         ��_���_� ;
   @��������� ������_of_��� = @0[��_�������] ��_���_�( %� ) ;
}
@�������
{             // too heavy = ������� ������� 
   @��������� ��_����_������� =
              @0[too] ����( &S ) ;
   @��������� ��_����_�������( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
              @0[�������] ����( ���, ����, �����, ����� );
}
@�������
{             // near enough = ���������� ������
   @��������� ��_����_���������� =
              ����( &S ) @0[enough] ;
   @��������� ��_����_����������( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
              @0[����������] ����( ���, ����, �����, ����� ) ;
}
@�������
{
   @�����     ��_����_����� =
              ��_����_�������
	      ��_����_���������� ;
//	      ��_����_������� ;
   @�����     ��_����_�����( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
              ��_����_�������   ( ���, ����, �����, ����� )
	      ��_����_����������( ���, ����, �����, ����� ) ;
//	      ��_����_�������   ( ���, ����, �����, ����� );
}
@�������
{             // for you = ��� ����
   @��������� for_��� = @0[for] ��_���_� ;
   @��������� for_��� = @0[���] ��_���_�( %� ) ;
}
@�������
{             // for you to lift = ����� �� ������
   @��������� for_����� = 
              @0[for]   ��_���_�  @0[to] ��_�������( &S1, %Inf ) ;
   @��������� for_����� = 
              @0[�����] ��_���_�( &�����, &����, %�, &��� )
	      ��_�������( %���,%������,�����,%�������,���,%�����,@0 ) ;
}
@�������
{             // to lift = ����� �������
   @��������� �����_to_inf = to_inf_akt( &S1 ) ;
   @��������� �����_to_inf = @0[�����] to_inf_akt ;
}
@�������
{
   @�����     �����_����_����� =
              for_�����
	      for_���
	      �����_to_inf
	      ;
   @�����     �����_����_����� =
              for_�����
	      for_���
	      �����_to_inf
	      ;
}
// -------------------------------------------------------------------
@�������
{             // very kind to do it = ����� �����, ������ ���
   @��������� ��_����1 =
	      _�������_�������  ����_������ _Not to_inf1( &S1 ) ;
   @��������� ��_����1( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
              _�������_�������  ����_������( ���, ����, �����, ����� ) _Not to_inf1 ;
}
@�������
{             // ready to start = ������� ������
   @��������� ��_����3 =
	      _Not ����( &S )                to_inf_akt( &S1 ) ;
   @��������� ��_����3( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
              _Not ����( ���, ����, �����, ����� ) to_inf_akt ;
}
@�������
{   // ... = ����� ���������, ����� �� ������
   @��������� ��_����5 =
	      _�������_�������  ����( &S )
	      @0[for] ��_���_� @0[to] ��_�������( &S1, %Inf ) ;
   @��������� ��_����5( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
              _�������_�������  ����( ���, ����, �����, ����� ) 
              @0[�����] ��_���_�( &�����1, &����, %�, &���1 )
	      ��_�������( %���,%������,�����1,%�������,���1,%�����,@0 ) ;
}
@�������
{   // ... = ����� ���������, ���� �� �� ������
   @��������� ��_����6 =
	      _�������_�������  ����( &S )
	      @0[for] ��_���_� @0[to] ��_�������( &S1, %Inf ) ;
   @��������� ��_����6( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
              _�������_�������  ����( ���, ����, �����, ����� ) 
              @0[����_��] ��_���_�( &�����1, &����, %�, &���1 )
	      ��_�������( %���,%������,�����1,%�������,���1,%�����,@0 ) ;
}
@�������
{             // near enough to see = ���������� ������, ����� ������
              // too havy for you to lift = ������� �������, ����� �� ������
   @��������� ��_����7 =
	      _Not ��_����_����� �����_����_����� ;
   @��������� ��_����7( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
              _Not ��_����_�����( ���, ����, �����, ����� ) �����_����_����� ;
}
@�������
{             // very big = ����� �������
   @��������� ��_����8 =
	      _Not _�������_�������  ����( &S ) ;
   @��������� ��_����8( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
              _Not _�������_�������  ����( ���, ����, �����, ����� ) ;
}
@�������
{
   @�����     ��_���� =
	      ��_����_�
              ��_����1
	      ��_����3
              ��_����5
              ��_����6
	      ��_����7
	      ��_����8
	      ����( &S )
	      ��_����_�0
	      ���������	      
	      ;
   @�����     ��_����( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
	      ��_����_� ( ���, ����, �����, ����� )
              ��_����1  ( ���, ����, �����, ����� )
	      ��_����3  ( ���, ����, �����, ����� )
	      ��_����5  ( ���, ����, �����, ����� )
	      ��_����6  ( ���, ����, �����, ����� )
	      ��_����7  ( ���, ����, �����, ����� )
	      ��_����8  ( ���, ����, �����, ����� )
	      ����      ( ���, ����, �����, ����� )
	      ��_����_�0( ���, ����, �����, ����� )
	      ��������� ( ���,       �����, ����� )
	      ;
}
@������� 
{
   @��������� ��_����_������� = 
              ��_����  to_inf_������� ;
   @��������� ��_����_�������( ��� &���, ���� &����, ����� &�����, ����� &����� ) = 
              ��_����( ���, ����, �����, ����� )
	      to_inf_�������  ( ���, ����� ) ;
}

