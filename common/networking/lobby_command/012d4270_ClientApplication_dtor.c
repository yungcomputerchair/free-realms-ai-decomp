// addr: 0x012d4270
// name: ClientApplication_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientApplication_dtor(void * this) */

void __fastcall ClientApplication_dtor(void *this)

{
  uint uVar1;
  void *obj;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Destroys the ClientApplication singleton: installs
                       ClientApplication::vftable, tears down connection/owned vectors/strings,
                       clears DAT_01cbd6a4 if this is the singleton, and calls base cleanup.
                       Evidence: the decompiled code explicitly writes ClientApplication::vftable.
                        */
  puStack_8 = &LAB_01670461;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *(undefined ***)this = ClientApplication::vftable;
  local_4 = 10;
  ClientApplication_clearPolymorphicTripleList(this);
  if (*(int *)((int)this + 8) != 0) {
    obj = NetworkService_getSingleton();
    VirtualObject_deleteIfNotNull(obj);
    *(undefined4 *)((int)this + 8) = 0;
  }
  if (this == DAT_01cbd6a4) {
    DAT_01cbd6a4 = (void *)0x0;
  }
  local_4 = CONCAT31(local_4._1_3_,9);
  if (*(int *)((int)this + 0x10c) != 0) {
    FUN_012d2de0(*(int *)((int)this + 0x10c),*(undefined4 *)((int)this + 0x110),(int)this + 0x108,
                 this);
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x10c));
  }
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  local_4 = CONCAT31(local_4._1_3_,8);
  if (*(int *)((int)this + 0xfc) != 0) {
    FUN_012d2de0(*(int *)((int)this + 0xfc),*(undefined4 *)((int)this + 0x100),(int)this + 0xf8,this
                );
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xfc));
  }
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  local_4._0_1_ = 7;
  Vector60_destructAndFree((void *)((int)this + 0xe8));
  local_4 = CONCAT31(local_4._1_3_,6);
  if (0xf < *(uint *)((int)this + 0xdc)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 200));
  }
  *(undefined4 *)((int)this + 0xdc) = 0xf;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined1 *)((int)this + 200) = 0;
  local_4._0_1_ = 5;
  FUN_00521a9c(uVar1);
  local_4 = CONCAT31(local_4._1_3_,4);
  if (*(void **)((int)this + 0xa0) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xa0));
  }
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  local_4._0_1_ = 3;
  FUN_00521a9c(uVar1);
  local_4._0_1_ = 2;
  FUN_00521a9c();
  local_4._0_1_ = 1;
  FUN_00521a9c();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00521a9c();
  local_4 = 0xffffffff;
  FUN_012d1a70();
  ExceptionList = local_c;
  return;
}

