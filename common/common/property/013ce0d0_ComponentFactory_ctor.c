// addr: 0x013ce0d0
// name: ComponentFactory_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ComponentFactory_ctor(void * this) */

void * __fastcall ComponentFactory_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructor for ComponentFactory. It installs ComponentFactory::vftable and
                       initializes its internal registry/member through FUN_013cdb90. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168a8cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = ComponentFactory::vftable;
  ComponentFactory_constructRegistry((void *)((int)this + 4));
  ExceptionList = local_c;
  return this;
}

