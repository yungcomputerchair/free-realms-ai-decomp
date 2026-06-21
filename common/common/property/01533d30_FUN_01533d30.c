// addr: 0x01533d30
// name: FUN_01533d30
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommandPayload_dtor(void * this) */

void __fastcall UserDataCommandPayload_dtor(void *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint local_18 [2];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Destroys a user-data command payload with vectors, strings, and owned
                       command/object fields. */
  puStack_8 = &LAB_016bb943;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  *(undefined ***)this = EventCommand_RespondEventLeaderBoard::vftable;
  local_4 = 8;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar1 = *(uint *)((int)this + 0x20);
  local_10 = this;
  if (uVar1 < *(uint *)((int)this + 0x1c)) {
    FUN_00d83c2d(uVar3);
  }
  uVar2 = *(uint *)((int)this + 0x1c);
  if (*(uint *)((int)this + 0x20) < uVar2) {
    FUN_00d83c2d(uVar3);
  }
  FUN_0041f5e6(local_18,(int)this + 0x18,uVar2,(int)this + 0x18,uVar1);
  uVar1 = *(uint *)((int)this + 0x30);
  if (uVar1 < *(uint *)((int)this + 0x2c)) {
    FUN_00d83c2d(uVar3);
  }
  uVar2 = *(uint *)((int)this + 0x2c);
  if (*(uint *)((int)this + 0x30) < uVar2) {
    FUN_00d83c2d(uVar3);
  }
  FUN_012a9f10(local_18,(int)this + 0x28,uVar2,(int)this + 0x28,uVar1);
  uVar1 = *(uint *)((int)this + 0x40);
  if (uVar1 < *(uint *)((int)this + 0x3c)) {
    FUN_00d83c2d();
  }
  uVar3 = *(uint *)((int)this + 0x3c);
  if (*(uint *)((int)this + 0x40) < uVar3) {
    FUN_00d83c2d();
  }
  FUN_0041f5e6(local_18,(int)this + 0x38,uVar3,(int)this + 0x38,uVar1);
  uVar1 = *(uint *)((int)this + 0x50);
  if (uVar1 < *(uint *)((int)this + 0x4c)) {
    FUN_00d83c2d();
  }
  uVar3 = *(uint *)((int)this + 0x4c);
  if (*(uint *)((int)this + 0x50) < uVar3) {
    FUN_00d83c2d();
  }
  FUN_0041f5e6(local_18,(int)this + 0x48,uVar3,(int)this + 0x48,uVar1);
  uVar1 = *(uint *)((int)this + 0x60);
  if (uVar1 < *(uint *)((int)this + 0x5c)) {
    FUN_00d83c2d();
  }
  uVar3 = *(uint *)((int)this + 0x5c);
  if (*(uint *)((int)this + 0x60) < uVar3) {
    FUN_00d83c2d();
  }
  FUN_0041f5e6(local_18,(int)this + 0x58,uVar3,(int)this + 0x58,uVar1);
  uVar1 = *(uint *)((int)this + 0x80);
  if (uVar1 < *(uint *)((int)this + 0x7c)) {
    FUN_00d83c2d();
  }
  uVar3 = *(uint *)((int)this + 0x7c);
  if (*(uint *)((int)this + 0x80) < uVar3) {
    FUN_00d83c2d();
  }
  FUN_0041f5e6(local_18,(int)this + 0x78,uVar3,(int)this + 0x78,uVar1);
  local_18[0] = *(uint *)((int)this + 0x70);
  if (local_18[0] < *(uint *)((int)this + 0x6c)) {
    FUN_00d83c2d();
  }
  uVar1 = *(uint *)((int)this + 0x6c);
  if (*(uint *)((int)this + 0x70) < uVar1) {
    FUN_00d83c2d();
  }
  FUN_0041f5e6(local_18,(int)this + 0x68,uVar1,(int)this + 0x68,local_18[0]);
  local_4._0_1_ = 7;
  FUN_013e9bd0();
  local_4 = CONCAT31(local_4._1_3_,6);
  if (*(void **)((int)this + 0x7c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x7c));
  }
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  if (*(void **)((int)this + 0x6c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x6c));
  }
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  if (*(void **)((int)this + 0x5c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x5c));
  }
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  if (*(void **)((int)this + 0x4c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x4c));
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (*(void **)((int)this + 0x3c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x3c));
  }
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (*(void **)((int)this + 0x2c) != (void *)0x0) {
    StdStringRange_destroy(*(void **)((int)this + 0x2c),*(void **)((int)this + 0x30));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x2c));
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (*(void **)((int)this + 0x1c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x1c));
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  local_4 = 0xffffffff;
  EventCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

