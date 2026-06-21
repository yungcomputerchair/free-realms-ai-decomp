// addr: 0x013b2e80
// name: LobbyCommand_Join_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_Join_dtor(void * this) */

void __fastcall LobbyCommand_Join_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Destructor for LobbyCommand_Join. It releases an owned virtual object,
                       several std::string fields, a dynamic buffer triple, then calls the
                       LobbyCommand base destructor. */
  puStack_8 = &LAB_01687a94;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_Join::vftable;
  local_4 = 4;
  if (*(undefined4 **)((int)this + 0x78) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x78))(1,uVar1);
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  if (0xf < *(uint *)((int)this + 0x74)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x60));
  }
  *(undefined4 *)((int)this + 0x74) = 0xf;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined1 *)((int)this + 0x60) = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0xf < *(uint *)((int)this + 0x54)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x40));
  }
  *(undefined4 *)((int)this + 0x54) = 0xf;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined1 *)((int)this + 0x40) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (*(void **)((int)this + 0x30) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x30));
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < *(uint *)((int)this + 0x28)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x14));
  }
  *(undefined4 *)((int)this + 0x28) = 0xf;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

