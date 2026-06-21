// addr: 0x00b16b80
// name: ClientInterpolatedMovementController_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ClientInterpolatedMovementController_ctor(void * this) */

void * __fastcall ClientInterpolatedMovementController_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ClientInterpolatedMovementController after invoking a
                       base/helper initializer. Evidence is assignment of
                       ClientInterpolatedMovementController::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015d09b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01077a70();
  *(undefined ***)this = ClientInterpolatedMovementController::vftable;
  ExceptionList = local_c;
  return this;
}

