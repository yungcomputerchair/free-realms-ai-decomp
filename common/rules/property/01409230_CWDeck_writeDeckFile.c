// addr: 0x01409230
// name: CWDeck_writeDeckFile
// subsystem: common/rules/property
// source (binary assert): common/rules/property/cwdeck.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void CWDeck_writeDeckFile(void * this, void * gameContext) */

void __thiscall CWDeck_writeDeckFile(void *this,void *gameContext)

{
  undefined1 *puVar1;
  uint uVar2;
  FILE *pFVar3;
  char ****ppppcVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piStack_68;
  int *local_64;
  undefined4 local_60;
  FILE *local_5c;
  undefined4 local_58;
  FILE *local_54;
  int iStack_50;
  int iStack_48;
  int iStack_44;
  int *piStack_40;
  undefined1 *puStack_3c;
  void *pvStack_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  char ***local_28 [3];
  uint uStack_1c;
  undefined4 local_18;
  undefined1 *local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Writes a deck export file: opens the path stored on the deck, emits Deck ID,
                       Deck Name, #Deck, and one Card line per card title/subtitle. Evidence is the
                       cwdeck.cpp file string plus the literal output format and ValueData string
                       assertions. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01691b90;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&piStack_68;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffff88;
  ExceptionList = &local_c;
  local_14 = &DAT_0000000f;
  local_18 = 0;
  local_28[0] = (char ***)((uint)local_28[0] & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_2c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)((int)this + 4),0,0xffffffff);
  local_4 = 0;
  FUN_01241650(&DAT_018e0a54,4);
  ppppcVar4 = (char ****)local_28[0];
  if (local_14 < &DAT_00000010) {
    ppppcVar4 = local_28;
  }
  pFVar3 = _fopen((char *)ppppcVar4,"w");
  local_54 = pFVar3;
  if (pFVar3 == (FILE *)0x0) {
    ppppcVar4 = (char ****)local_28[0];
    if (local_14 < &DAT_00000010) {
      ppppcVar4 = local_28;
    }
    Game_logGeneral(gameContext,"Couldn\'t open %s for writing!\n",ppppcVar4);
                    /* WARNING: Subroutine does not return */
    CRT_exit(0);
  }
  if (*(uint *)((int)this + 0x1c) < 0x10) {
    iVar9 = (int)this + 8;
  }
  else {
    iVar9 = *(int *)((int)this + 8);
  }
  FUN_00d8b416(pFVar3,"Deck ID: %s\n",iVar9,uVar2);
  if (*(uint *)((int)this + 0x54) < 0x10) {
    iVar9 = (int)this + 0x40;
  }
  else {
    iVar9 = *(int *)((int)this + 0x40);
  }
  FUN_00d8b416(pFVar3,"Deck Name: %s\n",iVar9,uVar2);
  FUN_00d8b416(pFVar3,"#Deck:\n");
  local_60 = 0;
  local_5c = (FILE *)0x0;
  local_58 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  (**(code **)(*(int *)this + 0x58))(&local_64,*(undefined4 *)((int)gameContext + 0x20));
  piStack_40 = local_64;
  if (local_64 < piStack_68) {
    FUN_00d83c2d();
  }
  piVar6 = piStack_68;
  iVar9 = 0;
  if (local_64 < piStack_68) {
    FUN_00d83c2d();
  }
  puStack_3c = &stack0xffffff94;
  do {
    puVar1 = puStack_3c;
    iVar8 = 0;
    if ((puStack_3c == (undefined1 *)0x0) || (puStack_3c != &stack0xffffff94)) {
      FUN_00d83c2d();
    }
    if (piVar6 == piStack_40) {
      _fclose(local_5c);
      local_c = (void *)((uint)local_c & 0xffffff00);
      if (piStack_68 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(piStack_68);
      }
      piStack_68 = (int *)0x0;
      local_64 = (int *)0x0;
      local_60 = 0;
      local_c = (void *)0xffffffff;
      if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_30);
      }
      ExceptionList = local_14;
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
    local_c._0_1_ = 2;
    FUN_012fa910();
    local_c = (void *)CONCAT31(local_c._1_3_,3);
    (**(code **)(*(int *)(iVar7 + 4) + 4))(1,&local_58);
    (**(code **)(*(int *)(iVar7 + 4) + 4))(5,&local_54);
    if (local_54 != (FILE *)0x3) {
      FUN_012f5a60("title.isStringValue()","..\\common\\rules\\property\\cwdeck.cpp",0x216);
    }
    if (iStack_48 != 3) {
      FUN_012f5a60("subTitle.isStringValue()","..\\common\\rules\\property\\cwdeck.cpp",0x217);
    }
    iVar9 = iVar9 + 1;
    if (iStack_48 == 3) {
LAB_01409469:
      if (*(uint *)(iStack_44 + 0x18) < 0x10) {
        iVar8 = iStack_44 + 4;
      }
      else {
        iVar8 = *(int *)(iStack_44 + 4);
      }
    }
    else {
      FUN_012f5a60("mTypeID == kStringTypeID",
                   "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                   ,0x11d);
      if (iStack_48 == 3) goto LAB_01409469;
    }
    if (local_54 == (FILE *)0x3) {
LAB_0140949e:
      if (*(uint *)(iStack_50 + 0x18) < 0x10) {
        iVar7 = iStack_50 + 4;
      }
      else {
        iVar7 = *(int *)(iStack_50 + 4);
      }
    }
    else {
      FUN_012f5a60("mTypeID == kStringTypeID",
                   "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                   ,0x11d);
      if (local_54 == (FILE *)0x3) goto LAB_0140949e;
      iVar7 = 0;
    }
    uVar5 = FUN_013795c0();
    FUN_00d8b416(local_5c,"Card %d: %s.%s (%d)\n",iVar9,iVar7,iVar8,uVar5);
    local_c._0_1_ = 2;
    FUN_01300cd0();
    local_c = (void *)CONCAT31(local_c._1_3_,1);
    FUN_01300cd0();
    if (*(int **)(puStack_3c + 8) <= piVar6) {
      FUN_00d83c2d();
    }
    piVar6 = piVar6 + 1;
  } while( true );
}

