// addr: 0x0090b930
// name: RecipeData_ctor
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * RecipeData_ctor(void * this) */

void * __fastcall RecipeData_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a recipe data record with default numeric fields and an embedded
                       SoeUtil::List<RecipeComponentData,-1>. It is called by RecipeAddPacket_ctor
                       and SelfObject_ParseFromBlob. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158bbb6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  FUN_00720bf0(0,0);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 1;
  *(undefined1 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = 1;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined ***)((int)this + 0x30) = SoeUtil::List<RecipeComponentData,-1>::vftable;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  ExceptionList = local_c;
  return this;
}

