// @���������2 ��_�������_�
//

@�������
{  @��������� ��_�������_�( ��_������� S1, ����� � ) = !������( &S1, &� ) �����_� ;
   @��������� ��_�������_�( verb_param ) = 
              !������( S,�,@0,�,�,�,%�����,� ) �����_� ;
}
@�������
{  @��������� ��_be_�( ����� � ) = @0[be] �����_be ;
   @��������� ��_be_�( verb_param ) = 
              ������[����]( S,�,@0,�,�,�,%�����,� ) �����_be( �,�,%�,%� ) ;
}
@�������
{  @��������� ��_have_been_�( ����� � ) = @0[have] @0[been] �����_be ;
   @��������� ��_have_been_�( verb_param ) = 
              ������[����]( S,�,@0,�,�,�,%�����,� ) �����_be( �,�,%�,%� ) ;
}
@�������
{  @��������� ��_have_�( ����� � ) = @0[have] �����_have ;
   @��������� ��_have_�( verb_param ) = 
              ������[����]( S,�,@0,�1,�,�1,%�����,� ) �����_have( &�1, %�, &�1 ) ;
}
@�������
{  @�����     ��_�������( ��_������� S1, ����� � ) = 
              !��_�������_�  ( &S1, &� )
	      ��_be_�       ( &� )
	      ��_have_been_�( &� )
	      ��_have_�     ( &� )
	      ��_�������_�  ( &� )
	      ��_be_��      ( &� )
	      ��_be1_��     ( &� )
	      ��_have_�     ( &� )
	      ;
   @�����     ��_�������( verb_param ) = 
              !��_�������_�  ( S,�,�,�,�,�,� )
	      ��_be_�       ( S,�,�,�,�,�,� )
	      ��_have_been_�( S,�,�,�,�,�,� )
	      ��_have_�     ( S,�,�,�,�,�,� )
	      ��_�������_�  ( S,�,�,�,�,�,� )
	      ��_be_��      ( S,�,�,�,�,�,� )
	      ��_be1_��     ( S,�,�,�,�,�,� )
	      ��_have_�     ( S,�,�,�,�,�,� )
	      ;
}
@�������
{  @��������� �����_to_inf_akt( ��_������� S1 ) = 
              _Not @0[to] !��_�������( &S1, %Inf ) ;
   @��������� �����_to_inf_akt  = 
               @0[���_����_�����] _Not !��_�������( %�����,%Inf,@0,@0,@0,%�����,@0 ) ;
}
@�������
{  @��������� to_inf_akt( ��_������� S1 ) = 
              _Not @0[to] !��_�������( &S1, %Inf ) ;
   @��������� to_inf_akt  = _Not !��_�������( %�����,%Inf,@0,@0,@0,%�����,@0 ) ;
}
@�������
{  @��������� to_inf_pass( ��_������� S1 ) =
              _Not @0[to] @0[be] !��_�������( &S1, %Form3 ) ;
   @��������� to_inf_pass( ����� &�, ��� &� ) = 
              _Not @0[����] !��_�������( %���,%���������,�,@0,���,%������,@0 ) ;
}
@�������
{
   @�����     to_inf( ��_������� S1 ) =
              !to_inf_akt ( &S1 )
	      !to_inf_pass( &S1 ) ;
   @�����     to_inf( ����� &�, ��� &� ) =
              !to_inf_akt
	      !to_inf_pass( �, � ) ;
}
/*
@�������
{  @��������� to_inf  = _Not @0[to] ��_�������( %Inf ) ;
   @��������� to_inf  = _Not ��_�������( %�����,%Inf,@0,@0,@0,%�����,@0,%��� ) ;
}
*/
@�������
{  @��������� to_inf1( ��_������� S1 ) = _Not @0[to] !��_�������( &S1, %Inf ) ;
   @��������� to_inf1 = _Not !��_�������( %���,%������������,@0,@0,@0,@0,@0 ) ;
}
@�������
{  @��������� to_inf2( ��_������� S1 ) = _Not @0[to] !��_�������( &S1, %Inf ) ;
   @��������� to_inf2( ����� &�����, ��� &��� ) =
              _Not !��_�������( %���,%������,�����,%�������,���,%�����,@0 ) ;
}
@�������
{  @��������� ��_inf_���������( ��_������� S1 ) = _Not @0[to] ��_�������( &S1, %Inf ) ;
   @��������� ��_inf_���������( ��� &���, ����� &�����, ����� &����� ) =
              _Not ��_�������( %���,%���������,�����,%�������,���,%�����,����� ) ;
}
@�������
{  @��������� ��_ing( ��_������� S1 )  = !��_�������( &S1, %Ing ) ;
   @��������� ��_ing  = !��_�������( %�����,%Inf,@0,@0,@0,%�����,@0 ) ;
}
@�������
{  @��������� ��_ing1( ��_������� S1 ) = !��_�������( &S1, %Ing ) ;
   @��������� ��_ing1( ��� &���, ����� &�����, ����� &����� ) =
              !��_�������( %�����,%���������,�����,%���������,���,%�����,����� ) ;
}
@�������
{  @��������� ����_������( ��_������� S1 ) = 
              ������� ���� ��_�������( &S1, %Inf ) ;
   @��������� ����_������ = 
              �������( &����� ) ���� ��_�������( %�����,%Inf,@0,@0,@0,%�����,@0 ) ;
}
@�������
{  // ------- ��� "������� � ������" --------
   @��������� to_inf_������� = 
              @0[to] ��_�������( &S1, %Inf ) ������� ;
   @��������� to_inf_�������( ��� &���, ����� &����� ) = 
              ��_�������( %�����,%Inf,@0,@0,@0,%�����,@0 ) 
	      �������( &����� ) ����[��]( ���, %� ,�����, ����� ) ;
}
@�������
{  @�����2     ���_������( ��_������� S1 ) = 
              !to_inf_akt( &S1) !to_inf1( &S1) !��_ing( &S1) ;
   @�����2     ���_������ = !to_inf_akt !to_inf1 !��_ing ;
}
/********************************************************************************/
@�������
{  @��������� but_do = _and_or _do _Not ;
   @��������� but_do = _and_or     _Not ; 
}
@�������
{  @�����     but_do1 = but_do  and_or ;
   @�����     but_do1 = but_do  and_or ; 
}

@�������
{  // ------- ��� but do print --------
   (���� �� �������� ��������, �� ������ �� �� ������� ������ ����� STRUCT2)
   @��������� but_do_������ = 
              but_do1   ������( &S1, %Inf ) �����_� ;
   @��������� but_do_������ = 
              but_do1 
	      ������( %�����, %������, %3�, %��, %���������, @0, %�����, @0 )
	      �����_� ;
}




