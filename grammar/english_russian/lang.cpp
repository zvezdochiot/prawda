// **************************************************************************
//   �������� ���������� ����� � ���� ���� ������ ���
//   ������������� ��������� ������
//   ��������������� ���� � ������� ������� g++ -E -o lang.txt -I. lang.cpp
// **************************************************************************
# include <lang.h>

@��������
{
// ------------------------ ������������ ��������� ------------------------ //
@������� {  @����� ____���������____ = ; @����� ��������� = ;  }
@�������
{  @����� _have = !@0[have] !@0[has] ;
   @����� _have = @0[1] @0[2] ;
}
@�������
{  @����� _will = @0[will] @0[shall] ;
   @����� _will = @0[1] @0[2] ;
}
@�������
{  @����� _would = @0[would] @0[should] ;
   @����� _would = @0[1] @0[2] ;
}
@�������
{  @����� _do = @0[do] @0[does] ;
   @����� _do = @0[1]  @0[2] ;
}
@�������
{  @����� __do = @0[do] @0[does] @00 ;
   @����� __do = @0[1]  @0[2]    @00 ;
}
@�������
{  @����� _was = @0[was] @0[were] ;
   @����� _was = @0[1]   @0[2] ;
}
@�������
{  @����� _No  = @0[no] @0[not] @00 ;
   @����� _No  = @0[��] @0[��]  @00 ;
}
@�������
{  @����� _No_p                  = @0[no] @0[not] @00 ;
   @����� _No_p( ����� &����� )  = @0[��] @0[��]  @00 ;
   
   @�������( @�����, = ����� ����� )
   {  1 = � ;
      2 = � ;
      3 = � ;
   }
}
@�������
{  @����� _No1_p                 = @0[no]  @0[not] @00 ;
   @����� _No1_p( ����� &����� ) = @0[���] @0[���] @0[����] ;

   @�������( @�����, = ����� ����� )
   {  1 = � ;
      2 = � ;
      3 = � ;
   }
}
@������� 
{  @����� _Not = @00 @0[not] ;
   @����� _Not = @00 @0[��] ;
}
@������� 
{  @����� _Not1 = @00 @0[not] ;
   @����� _Not1 = @00 @0[�����_��] ;
}
@������� 
{  @����� _And = @00 @0[and] ;
   @����� _And = @00 @0[�] ;
}
@������� 
{  @����� _Got = @00 @0[got] ;
   @����� _Got = @00 @0[1] ;
}
@������� 
{  @�����  and_or = @0[and] @0[or]  @0[but]  ;
   @�����  and_or = @0[�]   @0[���] @0[��] ;
}
@������� 
{  @����� _and_or = @00 @0[and] @0[or]  @0[but] ;
   @����� _and_or = @00 @0[�]   @0[���] @0[��] ;
}
@�������
{  @����� _������_is = @0[am] @0[are] @0[is] ;
   @����� _������_is = @0[1]  @0[2]   @0[3]  ;
}
@�������
{  @����� _������_was = @0[was] @0[were] ;
   @����� _������_was = @0[1]   @0[2]    ;
}
@�������
{  @����� _������� =
          ��_�������_��( &����� )
	  �������( &����� )
	  @00 ;
   @����� _������� =
          ��_�������_�� 
	  �������
	  @00 ;
}
@�������
{  @����� �������1( �����_������� ����� ) =
          ��_�������_��( &����� )
	  �������( &����� );
   @����� �������1 =
          ��_�������_�� 
	  ������� ;
}
@�������
{  @����� _�������_������� =
          ��_�������_��( %������� )
	  �������( %������� )
	  @00 ;
   @����� _�������_������� =
          ��_�������_�� 
	  �������
	  @00 ;
}

@������� {  @����� ____�����________ = ; @����� ����� = ;  }
# include <atom.h>
@������� {  @����� ____���__________ = ; @����� ��� = ;  }
# include <num.h>
# include <sub.h>
@������� {  @����� ____����_________ = ; @����� ���� = ;  }
# include <adj.h>
@������� {  @����� ____�������______ = ; @����� ������� = ;  }
# include <adv.h>
@������� {  @����� ____���������____ = ; @����� ��������� = ;  }
# include <verb.h>
# include <verb_be.h>
# include <verb_there_is.h>
# include <verb_have.h>
# include <verb_mod.h>
# include <verb_mod_be.h>
# include <verb_mod_have.h>
# include <verb_c.h>
@������� {  @����� ____������______ = ; @����� ������ = ;  }
# include <tail.h>
# include <tail_is.h>
# include <dis_quest.h>
@������� {  @����� ____WH_�����____ = ; @����� WH_����� = ;  }
# include <wh_frasa.h>
@������� {  @����� ____����________ = ; @����� ���� = ;  }
# include <core.h>
# include <next_chance.h>


@�������
{  @���������2 ���������� = ;
   @���������2 ���������� = ;
}
@�������
{  @�����     _���������� = ���������� @00 ;
   @�����     _���������� = ���������� @00 ;
}
@�������
{  @��������� @���������� = ���������� _���������� ;
   @��������� @���������� = ���������� _���������� ;
}

@�������
{
   @�����     ���_���1 =
	      �����
	      �����_have
	      �����_������������
	      �����_be
	      �����_be_�������
	      �����_there
	      ������_������_���������
	      ������_������_���������2
//	      ����������( &����, &����� )
//	      ������������ 
              ;
   @�����     ���_���1 =
	      �����
	      �����_have
	      �����_������������
	      �����_be
	      �����_be_�������
	      �����_there
	      ������_������_���������
	      ������_������_���������2
//	      ����������( &����, &�����, &��� )
//	      ������������ 
              ;
}

@�������
{  // -------- ���-�� ������� �������
   @�����     ���������_��� = @00 ���( &�����) ;
   @�����     ���������_��� = @00 ���( &���, &�, %�, %�� ) ;
}      
@�������
{
   @��������� ���_���_���_��� = ���������_��� ���_���1 ;
   @��������� ���_���_���_��� = ���������_��� ���_���1 ;
}   
@�������
{
   @�����     ���_��� =
              ���_���1
	      ���_���_��
	      ���_���_���_���
              ;
   @�����     ���_��� =
              ���_���1
	      ���_���_��
	      ���_���_���_���
              ;
}

}

