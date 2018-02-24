// **************************************************************************
//
//                     ���� � ���������� ���������
//
//                     ����_���������
//                     ����_������_���������
// **************************************************************************

// ---- ���������, � ������� ����������� ���������� "����� to be" -----
@�������
{
   @��������� ���������_be_to_inf( ��_������� S1 ) =
              ���������_be0[be] /* _������� */ to_inf( &S1 ) ;
   @��������� ���������_be_to_inf( ���� &����, ����� &�����, ��� &��� ) =
              /* _������� */
	      ���������_be0[����������]( ����, �����, ��� )
	      ���_������[������]( %�����,%������,����,�����,%���������,��� )
	      to_inf( �����,��� );
}
@�������
{
   @��������� ���������_be_to_be =
              ���������_be0[be] /* _������� */ @0[to] @0[be] ;
   @��������� ���������_be_to_be( ���� &����, ����� &�����, ��� &��� ) =
              /* _������� */
	      ���������_be0[����������]( ����, �����, ��� )
	      ���_������[������]( %�����,%������,����,�����,%���������,��� )
              @0[����] ;
}
@�������
{
   @��������� ���������_be_going_to_inf( ��_������� S1 ) =
              ���������_be0[be] @0[going] to_inf( &S1 ) ;
   @��������� ���������_be_going_to_inf( ���� &����, ����� &�����, ��� &��� ) =
              ���������_be0[����������]( ����, �����, ��� ) to_inf( �����, ��� ) ;
}
@�������
{
   @��������� ���������_be_going_to_be =
              ���������_be0[be] @0[going] @0[to] @0[be] ;
   @��������� ���������_be_going_to_be( ���� &����, ����� &�����, ��� &��� ) =
              ���������_be0[����������]( ����, �����, ��� ) @0[����] ;
}
@�������
{
   @�����     ���������_���������_be( ��_������� S1 ) =
	      ���������_be_to_inf      ( &S1 )
	      ���������_be_to_be
	      ���������_be_going_to_inf( &S1 )
	      ���������_be_going_to_be
	      ;
   @�����     ���������_���������_be( ���� &����, ����� &�����, ��� &��� ) =
	      ���������_be_to_inf      ( ����, �����, ��� )
	      ���������_be_to_be       ( ����, �����, ��� )
	      ���������_be_going_to_inf( ����, �����, ��� )
	      ���������_be_going_to_be ( ����, �����, ��� )
	      ;
}
@�������
{ 
   @��������� ����_���������_be( ��_������� S1 ) =
              ��_���( &�����, &���� ) ���������_���������_be( &S1 ) ;
   @��������� ����_���������_be =
              ��_���( &�����, &����, %�, &��� ) ���������_���������_be( ����, �����, ��� ) ;
   table_lizo( ���� )
   table_chislo( ����� )
}
@�������
{ 
   @��������� ����_have_���������( ��_������� S1 ) =
              ����_have1 ��_���_� !������( &S1, %Ing );
   @��������� ����_have_��������� =
	      ����_have1[���������]
	      ��_���_�( %� ) !������( %���,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
}

// ------------------------- ��������� ���� ----------------------------
# define table_vrema           \
   @�������( ����� ����� = ����� ����� )\
   {  Inf   = ��������� ;      \
      Form2 = ������� ;        \
   }

# define table_modal           \
   @�������( ����� ����� = ����� ����� ) \
   {  ��  = �� ;               \
      �� = �� ;                \
   }                           \
   @�������( ���� ���� = ���� ���� ) \
   {  1� = 1� ;                \
      2� = 2� ;                \
      3� = 3� ;                \
   }                           \
   @�������( ����� ����� = ����� ����� )\
   {  Inf   = ��������� ;      \
      Form2 = ������� ;        \
   }

@�������
{  @��������� ����_����( ��_������� S1 ) =
	      ��_���_�( &�����, &���� )
	      ���_������[can]( &����� ) _Not !������( &S1, %Inf ) ;
   @��������� ����_���� =
	      ��_���_�( &�����, &����, %�, &��� )
	      _Not ���_������[����]( %�����,%������,����,�����,&�����,��� )
	      !������( %���,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
   table_vrema
}
@�������
{  @��������� ����_����_�������( ��_������� S1 ) =
	      ��_���_�( &�����, &���� )
	      @0[will] _Not @0[be] @0[able] @0[to] !������( &S1, %Inf ) ;
   @��������� ����_����_������� =
	      ��_���_�( &�����, &����, %�, &��� )
	      _Not ���_������[����]( C��,%������,����,�����,%�������,@0 )
	      !������( %���,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
}
@�������
{  @��������� ����_������( ��_������� S1 ) =
	      ��_���_�( &�����, &���� )
	      ���_������[must]( &����� ) _Not _������� !������( &S1, %Inf ) ;
   @��������� ����_������ =
	      ��_���_�( &�����, &����, %�, &��� ) _������� _Not
	      ���_������[������]( %�����,%������,����,�����,&�����,@0 )
	      !������( %�����,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
   table_vrema
}
@�������
{  @��������� ����_�����( ��_������� S1 ) =
	      ��_���_�( &�����, &���� ) ���_������[may]( &����� ) 
	      _������� !������( &S1, %Inf ) ;
   @��������� ����_����� =
	      ��_���_�( &�����, &����, %�, &��� ) _�������
	      ���_������[�����]( %�����,%������,����,�����,&�����,��� )
	      !������( %�����,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
   table_vrema
}
@�������
{  @��������� ����_�����_���( ��_������� S1 ) =
	      ��_���_�( &�����, &���� )
	      ���_������[may]( &����� ) @0[not] _������� !������( &S1, %Inf ) ;
   @��������� ����_�����_��� =
	      ��_���_�( &�����, &����, %�, &��� ) _�������
	      ���_������[������]( %�����,%������,����,�����,&�����,@0 )
	      !������( %�����,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
   table_vrema
}
@�������
{  @��������� ����_�����( ��_������� S1 ) =
	      ��_���_�( &�����, &���� )
	      ���_������[need]( &����� ) _Not _������� !������( &S1, %Inf ) ;
   @��������� ����_����� =
	      ��_���_�( &�����, &����, %�, &��� ) _������� _Not
	      ���_������[�����]( %�����,%������,����,�����,&�����,@0 )
	      !������( %�����,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
   table_vrema
}
@�������
{  @��������� ����_�������( ��_������� S1 ) =
	      ��_���_�( &�����, &���� )
	      ���_������[ought]( &����� ) _Not _������� @0[to] !������( &S1, %Inf ) ;
   @��������� ����_������� =
	      ��_���_�( &�����, &����, %�, &��� ) _������� _Not
	      ���_������[�������]( %�����,%������,����,�����,&�����,@0 )
	      !������( %�����,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
   table_vrema
}
@�������
{  @��������� ����_have_to_�������( ��_������� S1 ) =
	      ��_���_�( &�����, &���� )
	      @0[had] _Not _Got @0[to] !������( &S1, %Inf ) ;
   @��������� ����_have_to_������� =
	      ��_���_�( &�����, &����, %�, &��� ) _Not
	      ���_������[������]( %�����,%������,����,�����,%�������,@0 )
	      !������( %�����,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
}
@�������
{  @��������� ����_have_to_���������( ��_������� S1 ) =
	      ��_���_�( &�����, &���� )
	      _have _Not _Got @0[to] !������( &S1, %Inf ) ;
   @��������� ����_have_to_��������� =
	      ��_���_�( &�����, &����, %�, &��� ) _Not
	      ���_������[������]( %�����,%������,����,�����,%���������,@0 )
	      !������( %�����,Inf,@0,@0,@0,@0,%�����,@0 ) ;
}
@�������
{  @��������� ����_have_to_���_���������( ��_������� S1 ) =
	      ��_���_�( &�����, &���� )
	      _do @0[not] _have _Got @0[to] !������( &S1, %Inf ) ;
   @��������� ����_have_to_���_��������� =
	      ��_���_�( &�����, &����, %�, &��� )
	      @0[��] ���_������[������]( %�����,%������,����,�����,%���������,@0 )
	      !������( %�����,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
}
@�������
{  @��������� ����_have_to_�������( ��_������� S1 ) =
	      ��_���_�( &�����, &���� )
	      _will @0[have] _Not _Got @0[to] !������<1>( &S1, %Inf ) ;
   @��������� ����_have_to_������� =
	      ��_���_�( &�����, &����, %�, &��� ) _Not
	      ������[����]( %���,%������,����,�����,%�������,@0,%�����,@0 )
	      ���_������[������]( %�����,%������,����,�����,%���������,��� )
	      !������<1>( %�����,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
}
// ---------- ��������� ����� ----------------------------
@�������
{  @��������� ����_����_����( ��_������� S1 ) =
	      ��_���_�( &�����, &���� ) _�������
	      ���_������[can]( &����� ) _Not @0[be] !������( &S1, %Form3 ) ;
   @��������� ����_����_���� =
	      ��_���_�( &�����, &����, %�, &��� ) _�������
	      _Not ���_������[����]( %�����,%������,����,�����,&�����,��� )
	      @0[����] !������( %���,%������,@0,�����,@0,���,%������,@0 ) ;
   table_vrema
}
@�������
{  @��������� ����_����_����_�������( ��_������� S1 ) =
	      ��_���_�( &�����, &���� )
	      @0[will] _Not @0[be] @0[able] @0[to] @0[be] !������( &S1, %Form3 ) ;
   @��������� ����_����_����_������� =
	      ��_���_�( &�����, &����, %�, &��� )
	      _Not ���_������[����]( C��,%������,����,�����,%�������,@0 )
	      @0[����] !������( %���,%������,@0,�����,@0,���,%������,@0 ) ;
}
@�������
{  @��������� ����_����_������( ��_������� S1 ) =
	      ��_���_�( &�����, &���� )
	      ���_������[must]( &����� ) _Not  @0[be] !������( &S1, %Form3 ) ;
   @��������� ����_����_������ =
	      ��_���_�( &�����, &����, %�, &��� ) _Not
	      ���_������[������]( %�����,%������,����,�����,&�����,@0 )
	      @0[����] !������( %���,%������,@0,�����,@0,���,%������,@0 ) ;
   table_vrema
}
@�������
{  @��������� ����_����_�����( ��_������� S1 ) =
	      ��_���_�( &�����, &���� ) 
	      ���_������[may]( &����� ) @0[be] !������( &S1, %Form3 ) ;
   @��������� ����_����_����� =
	      ��_���_�( &�����, &����, %�, &��� )
	      ���_������[�����]( %�����,%������,����,�����,&�����,��� )
	      @0[����] !������( %���,%������,@0,�����,@0,���,%������,@0 ) ;
   table_vrema
}
@�������
{  @��������� ����_����_�����_���( ��_������� S1 ) =
	      ��_���_�( &�����, &���� )
	      ���_������[may]( &����� ) @0[not] @0[be] !������( &S1, %Form3 ) ;
   @��������� ����_����_�����_��� =
	      ��_���_�( &�����, &����, %�, &��� )
	      ���_������[������]( %�����,%������,����,�����,&�����,@0 )
	      @0[����] !������( %���,%������,@0,�����,@0,���,%������,@0 ) ;
   table_vrema
}
@�������
{  @��������� ����_����_�����( ��_������� S1 ) =
	      ��_���_�( &�����, &���� )
	      ���_������[need]( &����� ) _Not @0[be] !������( &S1, %Form3 ) ;
   @��������� ����_����_����� =
	      ��_���_�( &�����, &����, %�, &��� ) _Not
	      ���_������[�����]( %�����,%������,����,�����,&�����,@0 )
	      @0[����] !������( %���,%������,@0,�����,@0,���,%������,@0 ) ;
   table_vrema
}
@�������
{  @��������� ����_����_�������( ��_������� S1 ) =
	      ��_���_�( &�����, &���� )
	      ���_������[ought]( &����� ) _Not @0[to] @0[be] !������( &S1, %Form3 ) ;
   @��������� ����_����_������� =
	      ��_���_�( &�����, &����, %�, &��� ) _Not
	      ���_������[�������]( %�����,%������,����,�����,&�����,@0 )
	      @0[����] !������( %���,%������,@0,�����,@0,���,%������,@0 ) ;
   table_vrema
}
@�������
{  @��������� ����_����_have_to_�������( ��_������� S1 ) =
	      ��_���_�( &�����, &���� )
	      @0[had] _Not _Got @0[to] @0[be] !������( &S1, %Form3 ) ;
   @��������� ����_����_have_to_������� =
	      ��_���_�( &�����, &����, %�, &��� ) _Not
	      ���_������[������]( %�����,%������,����,�����,%�������,@0 )
	      @0[����] !������( %���,%������,@0,�����,@0,���,%������,@0 ) ;
}
@�������
{  @��������� ����_����_have_to_���������( ��_������� S1 ) =
	      ��_���_�( &�����, &���� )
	      _have _Not _Got @0[to] @0[be] !������( &S1, %Form3 ) ;
   @��������� ����_����_have_to_��������� =
	      ��_���_�( &�����, &����, %�, &��� ) _Not
	      ���_������[������]( %�����,%������,����,�����,%���������,@0 )
	      @0[����] !������( %���,%������,@0,�����,@0,���,%������,@0 ) ;
}
@�������
{  @��������� ����_����_have_to_���_���������( ��_������� S1 ) =
	      ��_���_�( &�����, &���� )
	      _do @0[not] _have _Got @0[to] @0[be] !������( &S1, %Form3 ) ;
   @��������� ����_����_have_to_���_��������� =
	      ��_���_�( &�����, &����, %�, &��� )
	      @0[��] ���_������[������]( %�����,%������,����,�����,%���������,@0 )
	      @0[����] !������( %���,%������,@0,�����,@0,���,%������,@0 ) ;
}
@�������
{  @��������� ����_����_have_to_�������( ��_������� S1 ) =
	      ��_���_�( &�����, &���� )
	      _will @0[have] _Not _Got @0[to] @0[be] !������<1>( &S1, %Form3 ) ;
   @��������� ����_����_have_to_������� =
	      ��_���_�( &�����, &����, %�, &��� ) _Not
	      ������[����]( %���,%������,����,�����,%�������,@0,%�����,@0 )
	      ���_������[������]( %�����,%������,����,�����,%���������,��� )
	      @0[����] !������( %���,%������,@0,�����,@0,���,%������,@0 ) ;
}

@�������
{
   @�����     ����_���������( ��_������� S1 ) =
	      !����_����                  ( &S1 )
	      !����_����_�������          ( &S1 )
	      !����_������                ( &S1 )
	      !����_�����                 ( &S1 )
	      !����_�����_���             ( &S1 )
	      !����_�����                 ( &S1 )
	      !����_�������               ( &S1 )
	      !����_have_to_�������       ( &S1 )
	      !����_have_to_���������     ( &S1 )
	      !����_have_to_���_��������� ( &S1 )
	      !����_have_to_�������       ( &S1 )
	      !����_���������_be          ( &S1 )
	      !����_have_���������        ( &S1 )

	      !����_����_����             ( &S1 )
	      !����_����_����_�������     ( &S1 )
	      !����_����_������           ( &S1 )
	      !����_����_�����            ( &S1 )
	      !����_����_�����_���        ( &S1 )
	      !����_����_�����            ( &S1 )
	      !����_����_�������          ( &S1 )
	      !����_����_have_to_�������  ( &S1 )
	      !����_����_have_to_���������( &S1 )
	      !����_����_have_to_���_���������( &S1 )
	      !����_����_have_to_�������  ( &S1 )
	      ;
   @�����     ����_��������� =
	      !����_����
	      !����_����_�������
	      !����_������
	      !����_�����
	      !����_�����_���
	      !����_�����
	      !����_�������
	      !����_have_to_�������
	      !����_have_to_���������
	      !����_have_to_���_���������
	      !����_have_to_�������
	      !����_���������_be
	      !����_have_���������

	      !����_����_����
	      !����_����_����_�������
	      !����_����_������
	      !����_����_�����
	      !����_����_�����_���
	      !����_����_�����
	      !����_����_�������
	      !����_����_have_to_�������
	      !����_����_have_to_���������
	      !����_����_have_to_���_���������
	      !����_����_have_to_�������
	      ;
}
// ---------- ���� be_going ������ -----------------------------------
@�������
{
   @��������� ����_������_be_going_������� =
	      _was _Not ��_���( &�����, &���� ) @0[going] @0[to] ;
   @��������� ����_������_be_going_�������( ����������� &� ) =
	      _Not ������[����������]( %�����,%������,@0,�����,%�������,���,%�����,@0 )
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� ) ;
}
@�������
{
   @��������� ����_������_be_going_��������� =
	      _������_is  _Not ��_���( &�����, &���� ) @0[going] @0[to] ;
   @��������� ����_������_be_going_���������( ����������� &� ) =
	      _Not ������[����������]( %�����,%������,����,�����,%���������,@0,%�����,@0 )
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� );
}
@�������
{
   @��������� ����_������_be_going_������� =
	      _will _Not ��_���( &�����, &���� ) @0[be] @0[going] @0[to] ;
   @��������� ����_������_be_going_�������( ����������� &� ) =
	      _Not ������[����������]( %���,%������,����,�����,%�������,@0,%�����,@0 )
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� );
}
@�������
{
   @�����     ����_������_be_going =
              ����_������_be_going_�������
	      ����_������_be_going_���������
	      ����_������_be_going_�������
	      ;
   @�����     ����_������_be_going( ����������� &� ) =
              ����_������_be_going_�������  ( � )
	      ����_������_be_going_���������( � )
	      ����_������_be_going_�������  ( � )
	      ;
}

// ---------- ����, � ������� ����������� ���������� "����� to be" -----
@�������
{
   @��������� ����_������_be_to_inf( ��_������� S1 ) =
              ����_������_be[be] to_inf( &S1 ) ;
   @��������� ����_������_be_to_inf( ����������� &� ) =
              ����_������_be[����]( � )/* ( ����, �����, ��� ) */
	      ���_������[������]( %�����,%������,����,�����,%���������,��� )
	      to_inf( �����, ��� );
}
@�������
{
   @��������� ����_������_be_to_be =
              ����_������_be[be] @0[to] @0[be] ;
   @��������� ����_������_be_to_be( ����������� &� ) =
              ����_������_be[����]( � ) /* ( ����, �����, ��� ) */
	      ���_������[������]( %�����,%������,����,�����,%���������,��� )
              @0[����] ;
}
@�������
{
   @��������� ����_������_be_going_to_inf( ��_������� S1 ) =
              ����_������_be[be] @0[going] to_inf( &S1 ) ;
   @��������� ����_������_be_going_to_inf( ����������� &� ) =
              ����_������_be[����������]( � ) to_inf( �����, ��� );

}
@�������
{
   @��������� ����_������_be_going_to_be =
              ����_������_be[be] @0[going] @0[to] @0[be] ;
   @��������� ����_������_be_going_to_be( ����������� &� ) =
              ����_������_be[����������]( � ) @0[����] ;
}
@�������
{
   @�����     ����_������_���������_be( ��_������� S1 ) =
	      !����_������_be_to_inf      ( &S1 )
	       ����_������_be_to_be
	      !����_������_be_going_to_inf( &S1 )
	       ����_������_be_going_to_be
	      ;
   @�����     ����_������_���������_be( ����������� &� ) =
	      !����_������_be_to_inf      ( � )
	       ����_������_be_to_be       ( � )
	      !����_������_be_going_to_inf( � )
	       ����_������_be_going_to_be ( � )
	      ;
}
@�������
{ 
   @��������� ����_������_have_���������( ��_������� S1 ) =
              ����_have1_������ ��_���_� !������( &S1, %Ing );
   @��������� ����_������_have_���������( ����������� &� ) =
	      ����_have1_������[���������]( � )
	      ��_���_�( %� ) !������( %���,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
}

// ----------------------- ��������� ���� ������ ---------------------------
@�������
{  @��������� ����_������_����( ��_������� S1 ) =
              ���_������[can]( &����� ) _Not
	      ��_���( &�����, &���� ) !������( &S1, %Inf ) ;
   @��������� ����_������_����( ����������� &� ) =
	      _Not ���_������[����]( %�����,%������,����,�����,&�����,��� )
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� )
	      !������( %�����,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
   table_modal
}
@�������
{  @��������� ����_������_����_�������( ��_������� S1 ) =	      
	      @0[will] ��_���( &�����, &���� )
	      _Not @0[be] @0[able] @0[to] !������( &S1, %Inf ) ;
   @��������� ����_������_����_�������( ����������� &� ) =
              ���_������[����]( C��,%������,����,�����,%�������,@0 ) _Not
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� )	      
	      !������( %���,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
}
@�������
{  @��������� ����_������_������( ��_������� S1 ) =
	      ���_������[must]( &����� ) _Not
              ��_���( &�����, &���� ) !������( &S1, %Inf ) ;
   @��������� ����_������_������( ����������� &� ) =
	      _Not ���_������[������]( %�����,%������,����,�����,&�����,��� )
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� )
	      !������( %�����,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
   table_modal
}
@�������
{  @��������� ����_������_�����( ��_������� S1 ) =
	      ���_������[may]( &����� ) _Not ��_���( &�����, &���� )
	      !������( &S1, %Inf ) ;
   @��������� ����_������_�����( ����������� &� ) =
	      _Not ���_������[�����]( %�����,%������,����,�����,&�����,@0 )
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� )
	      !������( %�����,Inf,@0,@0,@0,@0,%�����,@0 ) ;
   table_modal
}
@�������
{  @��������� ����_������_�����( ��_������� S1 ) =
	      ���_������[need]( &����� ) _Not ��_���( &�����, &���� )
	      !������( &S1, %Inf ) ;
   @��������� ����_������_�����( ����������� &� ) =
	      _Not ���_������[�����]( %�����,%������,����,�����,&�����,@0 )
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� )
	      !������( %�����,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
   table_modal
}
@�������
{  @��������� ����_������_�������( ��_������� S1 ) =
	      ���_������[ought]( &����� ) _Not ��_���( &�����, &���� ) @0[to]
	      !������( &S1, %Inf ) ;
   @��������� ����_������_�������( ����������� &� ) =
	      _Not ���_������[�������]( %�����,%������,����,�����,&�����,@0 )
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� )
	      !������( %�����,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
   table_modal
}
@�������
{  @��������� ����_������_have_to_�������( ��_������� S1 ) =
	      @0[did] _Not ��_���( &�����, &���� ) @0[have] _Got @0[to]
	      !������( &S1, %Inf ) ;
   @��������� ����_������_have_to_�������( ����������� &� ) =
	      _Not ���_������[������]( %�����,%������,����,�����,%�������,��� )	      
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� )
	      !������( %�����,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
   table_lizo( ���� )
   table_chislo( ����� )
}
@�������
{  @��������� ����_������_have_to_���������( ��_������� S1 ) =
	      _do _Not ��_���( &�����, &���� ) _������� @0[have] _Got @0[to]
	      !������( &S1, %Inf ) ;
   @��������� ����_������_have_to_���������( ����������� &� ) =
	      _Not ���_������[������]( %�����,%������,����,�����,%���������,��� )
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� )
	      _�������
	      !������( %�����,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
   table_lizo( ���� )
   table_chislo( ����� )
}
@�������
{  @��������� ����_������_have_to_���������1( ��_������� S1 ) =
	      _have _Not ��_���( &�����, &���� ) _Got @0[to] ������( &S1, %Inf ) ;
   @��������� ����_������_have_to_���������1( ����������� &� ) =
	      _Not ���_������[������]( %�����,%������,����,�����,%���������,��� )
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� )
	      !������( %�����,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
   table_lizo( ���� )
   table_chislo( ����� )
}
@�������
{  @��������� ����_������_have_to_�������( ��_������� S1 ) =
	      _will _Not ��_���( &�����, &���� ) @0[have] _Got @0[to]
	      !������<1>( &S1, %Inf ) ;
   @��������� ����_������_have_to_�������( ����������� &� ) =
	      _Not ������[����]( %���,%������,����,�����,%�������,@0,%�����,@0 )
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� )
	      ���_������[������]( %�����,%������,����,�����,%���������,��� )
	      !������<1>( %�����,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
   table_lizo( ���� )
   table_chislo( ����� )
}
// ---------- ������ ��������� ��������� ------------------------
@�������
{  @��������� ����_������_����_����( ��_������� S1 ) =
              ���_������[can]( &����� ) _Not ��_���( &�����, &���� )
	      @0[be] !������( &S1, %Form3 ) ;
   @��������� ����_������_����_����( ����������� &� ) =
	      _Not ���_������[����]( %�����,%������,����,�����,&�����,��� )
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� )
	      @0[����] !������( %���,%������,@0,�����,@0,���,%������,@0 ) ;
   table_modal
}
@�������
{  @��������� ����_������_����_������( ��_������� S1 ) =
	      ���_������[must]( &����� ) _Not ��_���( &�����, &���� )
	      @0[be] !������( &S1, %Form3 ) ;
   @��������� ����_������_����_������( ����������� &� ) =
	      _Not ���_������[������]( %�����,%������,����,�����,&�����,��� )
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� )
	      @0[����] !������( %���,%������,@0,�����,@0,���,%������,@0 ) ;
   table_modal
}
@�������
{  @��������� ����_������_����_�����( ��_������� S1 ) =
	      ���_������[may]( &����� ) _Not ��_���( &�����, &���� )
	      @0[be] !������( &S1, %Form3 ) ;
   @��������� ����_������_����_�����( ����������� &� ) =
	      _Not ���_������[�����]( %�����,%������,����,�����,&�����,@0 )
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� )
	      @0[����] !������( %���,%������,@0,�����,@0,���,%������,@0 ) ;
   table_modal
}
@�������
{  @��������� ����_������_����_�����( ��_������� S1 ) =
	      ���_������[need]( &����� ) _Not ��_���( &�����, &���� )
	      @0[be] !������( &S1, %Form3 ) ;
   @��������� ����_������_����_�����( ����������� &� ) =
	      _Not ���_������[�����]( %�����,%������,����,�����,&�����,@0 )
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� )
	      @0[����] !������( %���,%������,@0,�����,@0,���,%������,@0 ) ;
   table_modal
}
@�������
{  @��������� ����_������_����_�������( ��_������� S1 ) =
	      ���_������[ought]( &����� ) _Not ��_���( &�����, &���� ) @0[to]
	      @0[be] !������( &S1, %Form3 ) ;
   @��������� ����_������_����_�������( ����������� &� ) =
	      _Not ���_������[�������]( %�����,%������,����,�����,&�����,@0 )
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� )
	      @0[����] !������( %���,%������,@0,�����,@0,���,%������,@0 ) ;
   table_modal
}
@�������
{  @��������� ����_������_����_have_to_�������( ��_������� S1 ) =
	      @0[did] _Not ��_���( &�����, &���� ) @0[have] _Got @0[to]
	      @0[be] !������( &S1, %Form3 ) ;
   @��������� ����_������_����_have_to_�������( ����������� &� ) =
	      _Not ���_������[������]( %�����,%������,����,�����,%�������,��� )	      
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� )
	      @0[����] !������( %���,%������,@0,�����,@0,���,%������,@0 ) ;
   table_lizo( ���� )
   table_chislo( ����� )
}
@�������
{  @��������� ����_������_����_have_to_���������( ��_������� S1 ) =
	      _do _Not ��_���( &�����, &���� ) _������� @0[have] _Got @0[to]
	      @0[be] !������( &S1, %Form3 ) ;
   @��������� ����_������_����_have_to_���������( ����������� &� ) =
	      _Not ���_������[������]( %�����,%������,����,�����,%���������,��� )
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� ) _�������
	      @0[����] !������( %���,%������,@0,�����,@0,���,%������,@0 ) ;
   table_lizo( ���� )
   table_chislo( ����� )
}
@�������
{  @��������� ����_������_����_have_to_���������1( ��_������� S1 ) =
	      _have _Not ��_���( &�����, &���� ) _Got @0[to] @0[be] ������( &S1, %Form3 ) ;
   @��������� ����_������_����_have_to_���������1( ����������� &� ) =
	      _Not ���_������[������]( %�����,%������,����,�����,%���������,��� )
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� )
	      @0[����] !������( %���,%������,@0,�����,@0,���,%������,@0 ) ;
   table_lizo( ���� )
   table_chislo( ����� )
}
@�������
{  @��������� ����_������_����_have_to_�������( ��_������� S1 ) =
	      _will _Not ��_���( &�����, &���� ) @0[have] _Got @0[to]
	      @0[be] !������<1>( &S1, %Form3 ) ;
   @��������� ����_������_����_have_to_�������( ����������� &� ) =
	      _Not ������[����]( %���,%������,����,�����,%�������,@0,%�����,@0 )
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� )
	      ���_������[������]( %�����,%������,����,�����,%���������,��� )
	      @0[����] !������<1>( %���,%������,@0,�����,@0,���,%������,@0 ) ;
   table_lizo( ���� )
   table_chislo( ����� )
}

@�������
{
   @�����     ����_������_���������( ��_������� S1 ) = 
	      !����_������_����              ( &S1 )
	      !����_������_����_�������      ( &S1 )
	      !����_������_������            ( &S1 )
	      !����_������_�����             ( &S1 )
	      !����_������_�����             ( &S1 )
	      !����_������_�������           ( &S1 )
	      !����_������_have_to_�������   ( &S1 )
	      !����_������_have_to_��������� ( &S1 )
	      !����_������_have_to_���������1( &S1 )
	      !����_������_have_to_�������   ( &S1 )
	      !����_������_���������_be      ( &S1 )
	      !����_������_have_���������    ( &S1 )

	      !����_������_����_����              ( &S1 )
	      !����_������_����_������            ( &S1 )
	      !����_������_����_�����             ( &S1 )
	      !����_������_����_�����             ( &S1 )
	      !����_������_����_�������           ( &S1 )
	      !����_������_����_have_to_�������   ( &S1 )
	      !����_������_����_have_to_��������� ( &S1 )
	      !����_������_����_have_to_���������1( &S1 )
	      !����_������_����_have_to_�������   ( &S1 )
	      ;
   @�����     ����_������_���������( ����������� &� ) = 
	      !����_������_����                   ( � )
	      !����_������_����_�������           ( � )
	      !����_������_������                 ( � )
	      !����_������_�����                  ( � )
	      !����_������_�����                  ( � )
	      !����_������_�������                ( � )
	      !����_������_have_to_�������        ( � )
	      !����_������_have_to_���������      ( � )
      	      !����_������_have_to_���������1     ( � )
	      !����_������_have_to_�������        ( � )
	      !����_������_���������_be           ( � )
	      !����_������_have_���������         ( � )

	      !����_������_����_����              ( � )
	      !����_������_����_������            ( � )
	      !����_������_����_�����             ( � )
	      !����_������_����_�����             ( � )
	      !����_������_����_�������           ( � )
	      !����_������_����_have_to_�������   ( � )
	      !����_������_����_have_to_��������� ( � )
      	      !����_������_����_have_to_���������1( � )
	      !����_������_����_have_to_�������   ( � )
	      ;
}
// ---------- ���� wheter ��������� ---------------------------
@�������
{  @��������� ����_wheter_����( ��_������� S1 ) =
	      ��_���( &�����, &���� )
	      ���_������[can]( &����� ) _Not !������( &S1, %Inf ) ;
   @��������� ����_wheter_���� =
              _Not ���_������[����]( %�����,%������,����,�����,&�����,��� ) @0[��]
	      ��_���( &�����, &����, %�, &��� )
	      !������( %���,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
   table_modal
}
@�������
{  @��������� ����_wheter_����_�������( ��_������� S1 ) =
	      ��_���( &�����, &���� )
	      @0[will] _Not @0[be] @0[able] @0[to] !������( &S1, %Inf ) ;
   @��������� ����_wheter_����_������� =
	      _Not ���_������[����]( C��,%������,����,�����,%�������,@0 ) @0[��]
	      ��_���( &�����, &����, %�, &��� )
	      !������( %���,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
   table_lizo( ���� )
   table_chislo( ����� )
}
@�������
{  @��������� ����_wheter_������( ��_������� S1 ) =
	      ��_���( &�����, &���� )
	      ���_������[must]( &����� ) _Not !������( &S1, %Inf ) ;
   @��������� ����_wheter_������ =
	      _Not ���_������[������]( %�����,%������,����,�����,&�����,@0 ) @0[��]
	      ��_���( &�����, &����, %�, &��� )
	      !������( %�����,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
   table_modal
}
@�������
{  @��������� ����_wheter_�����( ��_������� S1 ) =
	      ��_���( &�����, &���� ) ���_������[may]( &����� ) !������( &S1, %Inf ) ;
   @��������� ����_wheter_����� =
	      ���_������[�����]( %�����,%������,����,�����,&�����,��� ) @0[��]
	      ��_���( &�����, &����, %�, &��� )
	      !������( %�����,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
   table_modal
}
@�������
{  @��������� ����_wheter_�����_���( ��_������� S1 ) =
	      ��_���( &�����, &���� )
	      ���_������[may]( &����� ) @0[not] !������( &S1, %Inf ) ;
   @��������� ����_wheter_�����_��� =
	      ���_������[������]( %�����,%������,����,�����,&�����,@0 ) @0[��]
	      ��_���( &�����, &����, %�, &��� )
	      !������( %�����,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
   table_modal
}
@�������
{  @��������� ����_wheter_�����( ��_������� S1 ) =
	      ��_���( &�����, &���� )
	      ���_������[need]( &����� ) _Not !������( &S1, %Inf ) ;
   @��������� ����_wheter_����� =
	       _Not ���_������[�����]( %�����,%������,����,�����,&�����,@0 ) @0[��]
	      ��_���( &�����, &����, %�, &��� )
	      !������( %�����,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
   table_modal
}
@�������
{  @��������� ����_wheter_�������( ��_������� S1 ) =
	      ��_���( &�����, &���� )
	      ���_������[ought]( &����� ) _Not @0[to] !������( &S1, %Inf ) ;
   @��������� ����_wheter_������� =
	      _Not ���_������[�������]( %�����,%������,����,�����,&�����,@0 ) @0[��]
	      ��_���( &�����, &����, %�, &��� )
	      !������( %�����,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
   table_modal
}
@�������
{  @��������� ����_wheter_have_to_�������( ��_������� S1 ) =
	      ��_���( &�����, &���� )
	      @0[had] _Not _Got @0[to] !������( &S1, %Inf ) ;
   @��������� ����_wheter_have_to_������� =
	      _Not ���_������[������]( %�����,%������,����,�����,%�������,@0 ) @0[��]
	      ��_���( &�����, &����, %�, &��� )
	      !������( %�����,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
   table_lizo( ���� )
   table_chislo( ����� )
}
@�������
{  @��������� ����_wheter_have_to_���������( ��_������� S1 ) =
	      ��_���( &�����, &���� )
	      _have _Not _Got @0[to] !������( &S1, %Inf ) ;
   @��������� ����_wheter_have_to_��������� =
              _Not ���_������[������]( %�����,%������,����,�����,%���������,@0 ) @0[��]
	      ��_���( &�����, &����, %�, &��� )
	      !������( %�����,Inf,@0,@0,@0,@0,%�����,@0 ) ;
   table_lizo( ���� )
   table_chislo( ����� )
}
@�������
{  @��������� ����_wheter_have_to_���_���������( ��_������� S1 ) =
	      ��_���( &�����, &���� )
	      _do @0[not] _have _Got @0[to] !������( &S1, %Inf ) ;
   @��������� ����_wheter_have_to_���_��������� =
              @0[��] ���_������[������]( %�����,%������,����,�����,%���������,@0 ) @0[��]
	      ��_���( &�����, &����, %�, &��� )	      
	      !������( %�����,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
   table_lizo( ���� )
   table_chislo( ����� )
}
@�������
{  @��������� ����_wheter_have_to_�������( ��_������� S1 ) =
	      ��_���( &�����, &���� )
	      _will @0[have] _Not _Got @0[to] !������<1>( &S1, %Inf ) ;
   @��������� ����_wheter_have_to_������� =
	      _Not ������[����]( %���,%������,����,�����,%�������,@0,%�����,@0 ) @0[��]
	      ��_���( &�����, &����, %�, &��� )
	      ���_������[������]( %�����,%������,����,�����,%���������,��� )
	      !������<1>( %�����,%Inf,@0,@0,@0,@0,%�����,@0 ) ;
   table_lizo( ���� )
   table_chislo( ����� )
}
/*
@�������
{
   @�����     ����_wheter_��������� = 
	      !����_wheter_����
	      !����_wheter_����_�������
	      !����_wheter_������
	      !����_wheter_�����
	      !����_wheter_�����
	      !����_wheter_�������
	      !����_wheter_have_to_�������
	      !����_wheter_have_to_���������
	      !����_wheter_have_to_���_���������
	      !����_wheter_have_to_�������
	      ;
   @�����     ����_wheter_��������� = 
	      !����_wheter_����
	      !����_wheter_����_�������
	      !����_wheter_������
	      !����_wheter_�����
	      !����_wheter_�����
	      !����_wheter_�������
	      !����_wheter_have_to_�������
	      !����_wheter_have_to_���������
      	      !����_wheter_have_to_���_���������
	      !����_wheter_have_to_�������
	      ;
}
*/