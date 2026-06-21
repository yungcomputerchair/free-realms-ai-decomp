// addr: 0x01384c00
// name: EvaluationEnvironment_logCardList
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void EvaluationEnvironment_logCardList(void * this, char * prefix, void *
   cardList) */

void __thiscall EvaluationEnvironment_logCardList(void *this,char *prefix,void *cardList)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *******pppppppuVar6;
  undefined4 uVar7;
  int *piVar8;
  char *local_13e0;
  void *local_13dc;
  void *local_13d8;
  int *local_13d4;
  undefined1 local_13d0 [4];
  undefined4 ******local_13cc [4];
  undefined4 local_13bc;
  uint local_13b8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_13b4 [4];
  void *local_13b0;
  undefined4 local_13a0;
  uint local_139c;
  char local_1398 [5000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Formats and logs a card-list summary such as "N cards", "id (name)", or
                       "unloaded card" when evaluation logging is enabled. */
  puStack_8 = &LAB_01682e66;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_13e0;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffec10;
  ExceptionList = &local_c;
  local_13e0 = prefix;
  local_13dc = cardList;
  if ((((*(int *)((int)this + 4) == 0) || (*(char *)(*(int *)((int)this + 4) + 0x22c) != '\0')) &&
      (*(char *)((int)this + 0x78) != '\0')) && (cardList != (void *)0x0)) {
    local_139c = 0xf;
    local_13a0 = 0;
    local_13b0 = (void *)((uint)local_13b0 & 0xffffff00);
    local_4 = 0;
    local_13d4 = *(int **)((int)cardList + 8);
    local_13d8 = this;
    if (local_13d4 < *(int **)((int)cardList + 4)) {
      FUN_00d83c2d(uVar3);
    }
    if ((*(int *)((int)cardList + 4) == 0) ||
       (iVar4 = *(int *)((int)cardList + 8) - *(int *)((int)cardList + 4) >> 2, iVar4 == 0)) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (local_13b4,"NONE",4);
    }
    else {
      _sprintf(local_1398,"%d cards: ",iVar4);
      pcVar5 = local_1398;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_01241650(local_1398,(int)pcVar5 - (int)(local_1398 + 1));
      piVar8 = *(int **)((int)cardList + 4);
      if (*(int **)((int)cardList + 8) < piVar8) {
        FUN_00d83c2d(uVar3);
      }
      while( true ) {
        if ((cardList == (void *)0x0) || (cardList != local_13dc)) {
          FUN_00d83c2d();
        }
        this = local_13d8;
        if (piVar8 == local_13d4) break;
        local_13b8 = 0xf;
        local_13bc = 0;
        local_13cc[0] = (undefined4 ******)((uint)local_13cc[0] & 0xffffff00);
        local_4 = CONCAT31(local_4._1_3_,1);
        if (cardList == (void *)0x0) {
          FUN_00d83c2d();
        }
        if (*(int **)((int)cardList + 8) <= piVar8) {
          FUN_00d83c2d();
        }
        piVar2 = (int *)*piVar8;
        if (piVar2 != (int *)0x0) {
          if (piVar2[0x19] == 0) {
            uVar7 = PlayElement_getId();
            _sprintf(local_1398,"%d (unloaded card) ",uVar7);
            pcVar5 = local_1398;
            do {
              cVar1 = *pcVar5;
              pcVar5 = pcVar5 + 1;
            } while (cVar1 != '\0');
            iVar4 = (int)pcVar5 - (int)(local_1398 + 1);
          }
          else {
            (**(code **)(*piVar2 + 0x158))(local_13d0);
            pppppppuVar6 = (undefined4 *******)local_13cc[0];
            if (local_13b8 < 0x10) {
              pppppppuVar6 = local_13cc;
            }
            uVar7 = PlayElement_getId(pppppppuVar6);
            _sprintf(local_1398,"%d (%s) ",uVar7);
            pcVar5 = local_1398;
            do {
              cVar1 = *pcVar5;
              pcVar5 = pcVar5 + 1;
            } while (cVar1 != '\0');
            iVar4 = (int)pcVar5 - (int)(local_1398 + 1);
          }
          FUN_01241650(local_1398,iVar4);
        }
        local_4 = local_4 & 0xffffff00;
        if (0xf < local_13b8) {
                    /* WARNING: Subroutine does not return */
          _free(local_13cc[0]);
        }
        local_13cc[0] = (undefined4 ******)((uint)local_13cc[0] & 0xffffff00);
        local_13bc = 0;
        local_13b8 = 0xf;
        if (*(int **)((int)cardList + 8) <= piVar8) {
          FUN_00d83c2d();
        }
        piVar8 = piVar8 + 1;
      }
    }
    EvaluationEnvironment_tracef(this,"%s %s",local_13e0);
    local_4 = 0xffffffff;
    if (0xf < local_139c) {
                    /* WARNING: Subroutine does not return */
      _free(local_13b0);
    }
  }
  ExceptionList = local_c;
  return;
}

