// addr: 0x008b2b00
// name: ProfileItemClassData_ctor
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ProfileItemClassData_ctor(void * this) */

void * __fastcall ProfileItemClassData_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes a profile-item-class-like record with zeroed list/string fields
                       and default value 0x27e7. It is called by the same nearby parser family that
                       uses SoeUtil::HashListMap<int,ProfileItemClassData,1,-1>. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0157f63b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  FUN_00720bf0(0,0);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x27e7;
  *(undefined1 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  ExceptionList = local_c;
  return this;
}

