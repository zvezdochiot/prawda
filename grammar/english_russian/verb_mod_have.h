// **************************************************************************
//
//                     ���� � ���������� ���������
//
//                     ����_���������
//                     ����_������_���������
// **************************************************************************

@�������
{ 
   @��������� ����_have_have_��������� =
              ����_have1 ��_���_� @0[having] ;
   @��������� ����_have_have_��������� =
	      ����_have1[���������] ��_���_�( %� ) @0[�����] ;
}
@�������
{  @��������� ����_have_���� =
	      ��_���_�( &�����, &���� ) ���_������[can]( &����� ) _No_p @0[have] ;
   @��������� ����_have_����( ����� &�����, ��� &���, ����� ����� ) =
	      @0[�] ��_���_�( &�����1, &����, %�, &���1 )
	      _No_p( &����� ) ���_������[����]( %�����,%������,%3�,�����,&�����,��� )
	      @0[����] ;
   table_vrema
}
@�������
{  @��������� ����_have_����_������� =
	      ��_���_�( &�����, &���� )
	      @0[will] _Not @0[be] @0[able] @0[to] @0[have] ;
   @��������� ����_have_����_������� =
	      @0[�] ��_���_�( &�����, &����, %�, &��� )
	      _Not ���_������[����]( %���,%������,%3�,�����,%�������,@0 )
	      @0[����] ;
}
@�������
{  @��������� ����_have_������ =
	      ��_���_�( &�����, &���� )
	      ���_������[must]( &����� ) _No_p _������� @0[have] ;
   @��������� ����_have_������( ����� &�����, ��� &���, ����� ����� ) =
	      @0[�] ��_���_�( &�����1, &����, %�, &���1 ) _������� _No_p( &����� )
	      ���_������[������]( %�����,%������,%3�,�����,&�����,��� )
	      @0[����] ;
   table_vrema
}
@�������
{  @��������� ����_have_����� =
	      ��_���_�( &�����, &���� ) ���_������[may]( &����� ) 
	      _������� @0[have] ;
   @��������� ����_have_�����  =
	      ��_���_�( &�����, &����, %�, &��� ) _�������
	      ���_������[�����]( %�����,%������,����,�����,&�����,��� )
	      @0[�����] ;
   table_vrema
}
@�������
{  @��������� ����_have_�����_��� =
	      ��_���_�( &�����, &���� )
	      ���_������[may]( &����� ) @0[not] _������� @0[have] ;
   @��������� ����_have_�����_��� =
	      ��_���_�( &�����, &����, %�, &��� ) _�������
	      ���_������[������]( %�����,%������,����,�����,&�����,@0 )
	      @0[�����] ;
   table_vrema
}
@�������
{  @��������� ����_have_����� =
	      ��_���_�( &�����, &���� )
	      ���_������[need]( &����� ) _No_p _������� @0[have] ;
   @��������� ����_have_�����( ����� ����� ) =
	      ��_���_�( &�����, &����, %�, &��� ) _������� _No_p( &����� )
	      ���_������[�����]( %�����,%������,����,�����,&�����,@0 )
	      @0[�����] ;
   table_vrema
}
@�������
{  @��������� ����_have_������� =
	      ��_���_�( &�����, &���� )
	      ���_������[ought]( &����� ) _No_p _������� @0[to] @0[have] ;
   @��������� ����_have_�������( ����� ����� ) =
	      ��_���_�( &�����, &����, %�, &��� ) _������� _No_p( &����� )
	      ���_������[�������]( %�����,%������,����,�����,&�����,@0 )
	      @0[�����] ;
   table_vrema
}
@�������
{  @��������� ����_have_have_to_������� =
	      ��_���_�( &�����, &���� )
	      @0[had] _Not _Got @0[to] @0[have] ;
   @��������� ����_have_have_to_������� =
	      ��_���_�( &�����, &����, %�, &��� ) _Not
	      ���_������[������]( %�����,%������,����,�����,%�������,@0 )
	      @0[�����] ;
}
@�������
{  @��������� ����_have_have_to_��������� =
	      ��_���_�( &�����, &���� ) _have _Not _Got @0[to] @0[have] ;
   @��������� ����_have_have_to_��������� =
	      ��_���_�( &�����, &����, %�, &��� ) _Not
	      ���_������[������]( %�����,%������,����,�����,%���������,@0 )
	      @0[�����] ;
}
@�������
{  @��������� ����_have_have_to_���_��������� =
	      ��_���_�( &�����, &���� ) _do @0[not] _have _Got @0[to] @0[have] ;
   @��������� ����_have_have_to_���_��������� =
	      ��_���_�( &�����, &����, %�, &��� )
	      @0[��] ���_������[������]( %�����,%������,����,�����,%���������,@0 )
	      @0[�����] ;
}
@�������
{  @��������� ����_have_have_to_������� =
	      ��_���_�( &�����, &���� )
	      _will @0[have] _Not _Got @0[to] @0[have] ;
   @��������� ����_have_have_to_������� =
	      ��_���_�( &�����, &����, %�, &��� ) _Not
	      ������[����]( %���,%������,����,�����,%�������,@0,%�����,@0 )
	      ���_������[������]( %�����,%������,����,�����,%���������,��� )
	      @0[�����] ;
}

@�������
{
   @�����     ����_have_��������� =
	      ����_have_����
	      ����_have_����_�������
	      ����_have_������
	      ����_have_�����
	      ����_have_�����_���
	      ����_have_�����
	      ����_have_�������
	      ����_have_have_to_�������
	      ����_have_have_to_���������
	      ����_have_have_to_���_���������
	      ����_have_have_to_�������
	      ����_have_have_���������
	      ;
   @�����     ����_have_���������( ����� &�����, ��� &���, ����� ����� ) =
	      ����_have_����        ( �����, ���, &����� )
	      ����_have_����_�������
	      ����_have_������      ( �����, ���, &����� )
	      ����_have_�����
	      ����_have_�����_���
	      ����_have_�����                   ( &����� )
	      ����_have_�������                 ( &����� )
	      ����_have_have_to_�������
	      ����_have_have_to_���������
	      ����_have_have_to_���_���������
	      ����_have_have_to_�������
	      ����_have_have_���������
	      ;
}
// ---------- ����, � ������� ����������� ���������� "����� to be" -----
@�������
{
   @��������� ����_have_������_be_to_inf =
              ����_������_be[be] @0[to] @0[have] ;
   @��������� ����_have_������_be_to_inf( ����������� &� ) =
              ����_������_be[����]( � )
	      ���_������[������]( %�����,%������,����,�����,%���������,��� )
	      @0[�����];
}
@�������
{
   @��������� ����_have_������_be_going_to_inf =
              ����_������_be[be] @0[going] @0[have] ;
   @��������� ����_have_������_be_going_to_inf( ����������� &� ) =
              ����_������_be[����������]( � ) @0[�����];

}
@�������
{ 
   @��������� ����_have_������_have_��������� =
              ����_have1_������ ��_���_� @0[having] ;
   @��������� ����_have_������_have_���������( ����������� &� ) =
	      ����_have1_������[���������]( � ) ��_���_�( %� ) @0[�����] ;
}
// ----------------------- ��������� ���� ������ ---------------------------
@�������
{  @��������� ����_have_������_���� =
              ���_������[can]( &����� ) _Not
	      ��_���( &�����, &���� ) @0[have] ;
   @��������� ����_have_������_����( ����������� &� ) =
	      _Not ���_������[����]( %�����,%������,����,�����,&�����,��� )
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� ) @0[�����] ;
   table_modal
}
@�������
{  @��������� ����_have_������_������ =
	      ���_������[must]( &����� ) _Not
              ��_���( &�����, &���� ) @0[have] ;
   @��������� ����_have_������_������( ����������� &� ) =
	      _Not ���_������[������]( %�����,%������,����,�����,&�����,��� )
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� ) @0[�����] ;
   table_modal
}
@�������
{  @��������� ����_have_������_����� =
	      ���_������[may]( &����� ) _Not ��_���( &�����, &���� )
	      @0[have] ;
   @��������� ����_have_������_�����( ����������� &� ) =
	      _Not ���_������[�����]( %�����,%������,����,�����,&�����,@0 )
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� ) @0[�����] ;
   table_modal
}
@�������
{  @��������� ����_have_������_����� =
	      ���_������[need]( &����� ) _Not ��_���( &�����, &���� )
	      @0[have] ;
   @��������� ����_have_������_�����( ����������� &� ) =
	      _Not ���_������[�����]( %�����,%������,����,�����,&�����,@0 )
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� ) @0[�����] ;
   table_modal
}
@�������
{  @��������� ����_have_������_������� =
	      ���_������[ought]( &����� ) _Not ��_���( &�����, &���� ) @0[to]
	      @0[have] ;
   @��������� ����_have_������_�������( ����������� &� ) =
	      _Not ���_������[�������]( %�����,%������,����,�����,&�����,@0 )
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� ) @0[�����] ;
   table_modal
}
@�������
{  @��������� ����_have_������_have_to_������� =
	      @0[did] _Not ��_���( &�����, &���� ) @0[have] _Got @0[to]
	      @0[have] ;
   @��������� ����_have_������_have_to_�������( ����������� &� ) =
	      _Not ���_������[������]( %�����,%������,����,�����,%�������,��� )	      
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� ) @0[�����] ;
   table_lizo( ���� )
   table_chislo( ����� )
}
@�������
{  @��������� ����_have_������_have_to_��������� =
	      _do _Not ��_���( &�����, &���� ) _������� @0[have] _Got @0[to]
	      @0[have] ;
   @��������� ����_have_������_have_to_���������( ����������� &� ) =
	      _Not ���_������[������]( %�����,%������,����,�����,%���������,��� )
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� )
	      _������� @0[�����] ;
   table_lizo( ���� )
   table_chislo( ����� )
}
@�������
{  @��������� ����_have_������_have_to_���������1 =
	      _have _Not ��_���( &�����, &���� ) _Got @0[to] @0[have] ;
   @��������� ����_have_������_have_to_���������1( ����������� &� ) =
	      _Not ���_������[������]( %�����,%������,����,�����,%���������,��� )
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� ) @0[�����] ;
   table_lizo( ���� )
   table_chislo( ����� )
}
@�������
{  @��������� ����_have_������_have_to_������� =
	      _will _Not ��_���( &�����, &���� ) @0[have] _Got @0[to]
	      @0[have] ;
   @��������� ����_have_������_have_to_�������( ����������� &� ) =
	      _Not ������[����]( %���,%������,����,�����,%�������,@0,%�����,@0 )
	      �������[��]( � ) ��_���( &�����, &����, %�, &��� )
	      ���_������[������]( %�����,%������,����,�����,%���������,��� )
	      @0[�����] ;
   table_lizo( ���� )
   table_chislo( ����� )
}

@�������
{
   @�����     ����_have_������_��������� =    
	      ����_have_������_be_to_inf	      
	      ����_have_������_be_going_to_inf
	      ����_have_������_have_���������
	      ����_have_������_����
	      ����_have_������_������
	      ����_have_������_�����
	      ����_have_������_�����
	      ����_have_������_�������
	      ����_have_������_have_to_�������
	      ����_have_������_have_to_���������
	      ����_have_������_have_to_���������1
	      ����_have_������_have_to_�������
	      ����_have_������_have_���������
	      ;
   @�����     ����_have_������_���������( ����������� &� ) = 
	      ����_have_������_be_to_inf         ( � )
	      ����_have_������_be_going_to_inf   ( � )
	      ����_have_������_have_���������    ( � )
	      ����_have_������_����              ( � )
	      ����_have_������_������            ( � )
	      ����_have_������_�����             ( � )
	      ����_have_������_�����             ( � )
	      ����_have_������_�������           ( � )
	      ����_have_������_have_to_�������   ( � )
	      ����_have_������_have_to_��������� ( � )
      	      ����_have_������_have_to_���������1( � )
	      ����_have_������_have_to_�������   ( � )
	      ����_have_������_have_���������    ( � )
	      ;
}
// ---------- ���� wheter ��������� ---------------------------
@�������
{  @��������� ����_have_wheter_���� =
	      ��_���( &�����, &���� ) ���_������[can]( &����� ) _Not @0[have] ;
   @��������� ����_have_wheter_���� =
              _Not ���_������[����]( %�����,%������,����,�����,&�����,��� ) @0[��]
	      ��_���( &�����, &����, %�, &��� ) @0[�����] ;
   table_modal
}
@�������
{  @��������� ����_have_wheter_����_������� =
	      ��_���( &�����, &���� ) @0[will] _Not @0[be] @0[able] @0[to] @0[have] ;
   @��������� ����_have_wheter_����_������� =
	      _Not ���_������[����]( C��,%������,����,�����,%�������,@0 ) @0[��]
	      ��_���( &�����, &����, %�, &��� ) @0[�����] ;
   table_lizo( ���� )
   table_chislo( ����� )
}
@�������
{  @��������� ����_have_wheter_������ =
	      ��_���( &�����, &���� ) ���_������[must]( &����� ) _Not @0[have] ;
   @��������� ����_have_wheter_������ =
	      _Not ���_������[������]( %�����,%������,����,�����,&�����,@0 ) @0[��]
	      ��_���( &�����, &����, %�, &��� ) @0[�����] ;
   table_modal
}
@�������
{  @��������� ����_have_wheter_����� =
	      ��_���( &�����, &���� ) ���_������[may]( &����� ) @0[have] ;
   @��������� ����_have_wheter_����� =
	      ���_������[�����]( %�����,%������,����,�����,&�����,��� ) @0[��]
	      ��_���( &�����, &����, %�, &��� ) @0[�����] ;
   table_modal
}
@�������
{  @��������� ����_have_wheter_�����_��� =
	      ��_���( &�����, &���� ) ���_������[may]( &����� ) @0[not] @0[have] ;
   @��������� ����_have_wheter_�����_��� =
	      ���_������[������]( %�����,%������,����,�����,&�����,@0 ) @0[��]
	      ��_���( &�����, &����, %�, &��� ) @0[�����] ;
   table_modal
}
@�������
{  @��������� ����_have_wheter_����� =
	      ��_���( &�����, &���� ) ���_������[need]( &����� ) _Not @0[have] ;
   @��������� ����_have_wheter_����� =
	       _Not ���_������[�����]( %�����,%������,����,�����,&�����,@0 ) @0[��]
	      ��_���( &�����, &����, %�, &��� ) @0[�����] ;
   table_modal
}
@�������
{  @��������� ����_have_wheter_������� =
	      ��_���( &�����, &���� ) ���_������[ought]( &����� ) _Not @0[to] @0[have] ;
   @��������� ����_have_wheter_������� =
	      _Not ���_������[�������]( %�����,%������,����,�����,&�����,@0 ) @0[��]
	      ��_���( &�����, &����, %�, &��� ) @0[�����] ;
   table_modal
}
@�������
{  @��������� ����_have_wheter_have_to_������� =
	      ��_���( &�����, &���� ) @0[had] _Not _Got @0[to] @0[have] ;
   @��������� ����_have_wheter_have_to_������� =
	      _Not ���_������[������]( %�����,%������,����,�����,%�������,@0 ) @0[��]
	      ��_���( &�����, &����, %�, &��� ) @0[�����] ;
   table_lizo( ���� )
   table_chislo( ����� )
}
@�������
{  @��������� ����_have_wheter_have_to_��������� =
	      ��_���( &�����, &���� ) _have _Not _Got @0[to] @0[have] ;
   @��������� ����_have_wheter_have_to_��������� =
              _Not ���_������[������]( %�����,%������,����,�����,%���������,@0 ) @0[��]
	      ��_���( &�����, &����, %�, &��� ) @0[�����] ;
   table_lizo( ���� )
   table_chislo( ����� )
}
@�������
{  @��������� ����_have_wheter_have_to_���_��������� =
	      ��_���( &�����, &���� ) _do @0[not] _have _Got @0[to] @0[have] ;
   @��������� ����_have_wheter_have_to_���_��������� =
              @0[��] ���_������[������]( %�����,%������,����,�����,%���������,@0 ) @0[��]
	      ��_���( &�����, &����, %�, &��� ) @0[�����] ;
   table_lizo( ���� )
   table_chislo( ����� )
}
@�������
{  @��������� ����_have_wheter_have_to_������� =
	      ��_���( &�����, &���� ) _will @0[have] _Not _Got @0[to] @0[have] ;
   @��������� ����_have_wheter_have_to_������� =
	      _Not ������[����]( %���,%������,����,�����,%�������,@0,%�����,@0 ) @0[��]
	      ��_���( &�����, &����, %�, &��� )
	      ���_������[������]( %�����,%������,����,�����,%���������,��� )
	      @0[�����] ;
   table_lizo( ���� )
   table_chislo( ����� )
}
/*
@�������
{
   @�����     ����_have_wheter_��������� = 
	      ����_have_wheter_����
	      ����_have_wheter_����_�������
	      ����_have_wheter_������
	      ����_have_wheter_�����
	      ����_have_wheter_�����
	      ����_have_wheter_�������
	      ����_have_wheter_have_to_�������
	      ����_have_wheter_have_to_���������
	      ����_have_wheter_have_to_���_���������
	      ����_have_wheter_have_to_�������
	      ;
   @�����     ����_have_wheter_��������� = 
	      ����_have_wheter_����
	      ����_have_wheter_����_�������
	      ����_have_wheter_������
	      ����_have_wheter_�����
	      ����_have_wheter_�����
	      ����_have_wheter_�������
	      ����_have_wheter_have_to_�������
	      ����_have_wheter_have_to_���������
      	      ����_have_wheter_have_to_���_���������
	      ����_have_wheter_have_to_�������
	      ;
}
*/