// addr: 0x014184c0
// name: CWPlayerPlayArea_createHolderCardArea
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void * CWPlayerPlayArea_createHolderCardArea(void * game, int playerIndex_) */

void * __thiscall CWPlayerPlayArea_createHolderCardArea(void *this,void *game,int playerIndex_)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  void *pvVar4;
  undefined4 uVar5;
  int *this_00;
  void *local_4c [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbStack_44;
  char acStack_40 [12];
  void *pvStack_34;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  undefined1 uStack_24;
  undefined1 uStack_1c;
  undefined4 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates a CWPlayerPlayArea for a player's holder-card area, formatting the
                       name string as 'Player%d HolderCard' and constructing the play area. Evidence
                       is the referenced format string and CWPlayerPlayArea_ctor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01693371;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_4c;
  ExceptionList = &local_c;
  local_4c[0] = Mem_Alloc(0x150);
  this_00 = (int *)0x0;
  local_4 = 0;
  if (local_4c[0] == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)CWCard_ctor();
  }
  local_4 = 0xffffffff;
  *(int **)((int)this + 0x30) = piVar2;
  (**(code **)(*piVar2 + 0x44))(game);
  (**(code **)(**(int **)((int)this + 0x30) + 0xb4))(0x5f6303a);
  (**(code **)(**(int **)((int)this + 0x30) + 0xbc))(1);
  FUN_012fa910();
  uStack_14 = 1;
  _sprintf(acStack_40,"Player%d HolderCard",*(undefined4 *)((int)this + 0x34));
  FUN_01300680(3);
  pcVar3 = acStack_40;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbStack_44,acStack_40,(int)pcVar3 - (int)(acStack_40 + 1));
  (**(code **)(**(int **)((int)this + 0x30) + 0x10))(1,local_4c);
  FUN_012fa910();
  uStack_1c = 2;
  FUN_01300680(2);
  (**(code **)(**(int **)((int)this + 0x30) + 0x10))(0x1c,&stack0xffffffa0);
  pvVar4 = Mem_Alloc(0x58);
  uStack_24 = 3;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = CWPlayerPlayArea_ctor(pvVar4);
  }
  uStack_24 = 2;
  *(void **)((int)this + 4) = pvVar4;
  PlayElement_setZoneOwner(pvVar4,*(int *)((int)this + 0x34));
  (**(code **)(**(int **)((int)this + 4) + 0x40))(game);
  pvVar4 = Mem_Alloc(0x48);
  uStack_28 = 4;
  if (pvVar4 != (void *)0x0) {
    this_00 = PlayArea_ctor(pvVar4);
  }
  uStack_28 = 2;
  PlayElement_setZoneOwner(this_00,*(int *)((int)this + 0x34));
  (**(code **)(*this_00 + 0x40))(game);
  uVar5 = PlayElement_getId();
  *(undefined4 *)((int)this + 0x4c) = uVar5;
  uStack_2c = CONCAT31(uStack_2c._1_3_,1);
  FUN_01300cd0();
  uStack_2c = 0xffffffff;
  uVar5 = FUN_01300cd0();
  ExceptionList = pvStack_34;
  return (void *)CONCAT31((int3)((uint)uVar5 >> 8),1);
}

