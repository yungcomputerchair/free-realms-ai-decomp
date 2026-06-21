// addr: 0x010c28a0
// name: MiniGamePreloadEntry_dtor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MiniGamePreloadEntry_dtor(void * this) */

void * __fastcall MiniGamePreloadEntry_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a minigame preload entry by running a fixed sequence of destructors
                       for composite/camera/light/sound/effect members, then returns the object
                       pointer. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0164956c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c52c30(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  FUN_00c52cb0();
  local_4._0_1_ = 1;
  FUN_00c52d30();
  local_4._0_1_ = 2;
  FUN_00c52db0();
  local_4._0_1_ = 3;
  FUN_00c52e30();
  local_4._0_1_ = 4;
  FUN_00c52eb0();
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_010c2760();
  ExceptionList = local_c;
  return this;
}

