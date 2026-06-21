// addr: 0x013cf0a0
// name: Deck_writeToFile
// subsystem: common/review2
// source (binary assert): common/common/property/Deck.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall Deck_writeToFile(int param_1,void *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  FILE *pFVar3;
  char ****ppppcVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_68;
  undefined1 local_64 [4];
  int *local_60;
  int *local_5c;
  undefined4 local_58;
  FILE *local_54;
  undefined1 local_50 [4];
  int iStack_4c;
  int iStack_48;
  int iStack_40;
  int iStack_3c;
  int *local_38;
  undefined1 *local_34;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  char ***local_28 [4];
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Writes a Deck to a text file/log with deck name, deck ID, archetypes, and
                       per-card lines like "Card %d: %s.%s (%d)"; reports when it cannot open the
                       file. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168aab0;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_68;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffff88;
  ExceptionList = &local_c;
  local_14 = 0xf;
  local_18 = 0;
  local_28[0] = (char ***)((uint)local_28[0] & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_2c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)(param_1 + 4),0,0xffffffff);
  local_4 = 0;
  FUN_01241650(&DAT_018e0a54,4);
  ppppcVar4 = (char ****)local_28[0];
  if (local_14 < 0x10) {
    ppppcVar4 = local_28;
  }
  pFVar3 = _fopen((char *)ppppcVar4,"w");
  local_54 = pFVar3;
  if (pFVar3 == (FILE *)0x0) {
    ppppcVar4 = (char ****)local_28[0];
    if (local_14 < 0x10) {
      ppppcVar4 = local_28;
    }
    Game_logGeneral(param_2,"Couldn\'t open %s for writing!\n",ppppcVar4);
                    /* WARNING: Subroutine does not return */
    CRT_exit(0);
  }
  if (*(uint *)(param_1 + 0x1c) < 0x10) {
    iVar8 = param_1 + 8;
  }
  else {
    iVar8 = *(int *)(param_1 + 8);
  }
  FUN_00d8b416(pFVar3,"Deck ID: %s\n",iVar8,uVar2);
  if (*(uint *)(param_1 + 0x54) < 0x10) {
    iVar8 = param_1 + 0x40;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x40);
  }
  FUN_00d8b416(pFVar3,"Deck Name: %s\n",iVar8,uVar2);
  FUN_00d8b416(pFVar3,"#Deck:\n");
  local_60 = (int *)0x0;
  local_5c = (int *)0x0;
  local_58 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  Deck_collectArchetypesFromEntries((void *)(param_1 + 0x78),local_64,*(int *)((int)param_2 + 0x20))
  ;
  local_38 = local_5c;
  if (local_5c < local_60) {
    FUN_00d83c2d();
  }
  piVar6 = local_60;
  local_68 = 0;
  if (local_5c < local_60) {
    FUN_00d83c2d();
  }
  local_34 = local_64;
  do {
    puVar1 = local_34;
    iVar8 = 0;
    if ((local_34 == (undefined1 *)0x0) || (local_34 != local_64)) {
      FUN_00d83c2d();
    }
    if (piVar6 == local_38) {
      _fclose(local_54);
      local_4 = local_4 & 0xffffff00;
      if (local_60 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_60);
      }
      local_60 = (int *)0x0;
      local_5c = (int *)0x0;
      local_58 = 0;
      local_4 = 0xffffffff;
      if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
        _free(local_28[0]);
      }
      ExceptionList = local_c;
      return;
    }
    if (puVar1 == (undefined1 *)0x0) {
      FUN_00d83c2d();
    }
    if (*(int **)(puVar1 + 8) <= piVar6) {
      FUN_00d83c2d();
    }
    iVar7 = *piVar6;
    FUN_012fa910();
    local_4._0_1_ = 2;
    FUN_012fa910();
    local_4 = CONCAT31(local_4._1_3_,3);
    (**(code **)(*(int *)(iVar7 + 4) + 4))(1,local_50);
    (**(code **)(*(int *)(iVar7 + 4) + 4))(5,&iStack_4c);
    if (iStack_4c != 3) {
      FUN_012f5a60("title.isStringValue()","..\\common\\common\\property\\Deck.cpp",0x1a5);
    }
    if (iStack_40 != 3) {
      FUN_012f5a60("subTitle.isStringValue()","..\\common\\common\\property\\Deck.cpp",0x1a6);
    }
    local_68 = local_68 + 1;
    if (iStack_40 == 3) {
LAB_013cf2da:
      if (*(uint *)(iStack_3c + 0x18) < 0x10) {
        iVar8 = iStack_3c + 4;
      }
      else {
        iVar8 = *(int *)(iStack_3c + 4);
      }
    }
    else {
      FUN_012f5a60("mTypeID == kStringTypeID",
                   "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                   ,0x11d);
      if (iStack_40 == 3) goto LAB_013cf2da;
    }
    if (iStack_4c == 3) {
LAB_013cf30f:
      if (*(uint *)(iStack_48 + 0x18) < 0x10) {
        iVar7 = iStack_48 + 4;
      }
      else {
        iVar7 = *(int *)(iStack_48 + 4);
      }
    }
    else {
      FUN_012f5a60("mTypeID == kStringTypeID",
                   "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                   ,0x11d);
      if (iStack_4c == 3) goto LAB_013cf30f;
      iVar7 = 0;
    }
    uVar5 = FUN_013795c0();
    FUN_00d8b416(local_54,"Card %d: %s.%s (%d)\n",local_68,iVar7,iVar8,uVar5);
    local_4._0_1_ = 2;
    FUN_01300cd0();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_01300cd0();
    if (*(int **)(local_34 + 8) <= piVar6) {
      FUN_00d83c2d();
    }
    piVar6 = piVar6 + 1;
  } while( true );
}

