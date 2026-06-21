// addr: 0x007e73d0
// name: AnimVisibilityController_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AnimVisibilityController_ctor(void * this) */

void * __thiscall AnimVisibilityController_ctor(void *this)

{
  undefined4 *reference;
  void *in_stack_00000004;
  undefined1 in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a AnimVisibilityController object: runs its base constructor,
                       installs the AnimVisibilityController vtable, and initializes owned fields.
                       It also initializes the embedded AnimData::CallbackInterface subobject and
                       stores visibility state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01564878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007e7110(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  reference = (undefined4 *)((int)this + 8);
  *reference = AnimData::CallbackInterface::vftable;
  *(undefined ***)this = AnimVisibilityController::vftable;
  *reference = AnimVisibilityController::vftable;
  *(void **)((int)this + 0xc) = in_stack_00000004;
  *(undefined1 *)((int)this + 0x10) = in_stack_00000008;
  AnimVisibilityController_addReference(in_stack_00000004,reference);
  ExceptionList = local_c;
  return this;
}

