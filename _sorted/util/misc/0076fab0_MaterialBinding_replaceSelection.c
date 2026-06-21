// addr: 0x0076fab0
// name: MaterialBinding_replaceSelection
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MaterialBinding_replaceSelection(void * this, void * unused, void *
   selectionDesc) */

void __thiscall MaterialBinding_replaceSelection(void *this,void *unused,void *selectionDesc)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  int *this_00;
  void *this_01;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a new 0x88-byte refcounted object from the selection descriptor,
                       applies/remaps it against the existing object at +0x4b8, then releases the
                       temporary reference. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0155737b;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  this_00 = (int *)0x0;
  if (**(int **)((int)this + 0x130) == 0) {
    this_01 = (void *)0x0;
  }
  else {
    this_01 = *(void **)(**(int **)((int)this + 0x130) + 0x84);
  }
  pvVar3 = Mem_Alloc(0x88);
  local_4 = 0;
  if (pvVar3 != (void *)0x0) {
    this_00 = (int *)FUN_010a5220(selectionDesc);
  }
  local_4 = 0xffffffff;
  MaterialParameterMap_applyOverrides(this_00,*(void **)((int)this + 0x4b8));
  MaterialParameterMap_applyOverrides(this_01,this_00);
  LOCK();
  iVar1 = this_00[1] + -1;
  this_00[1] = iVar1;
  UNLOCK();
  if (iVar1 == 0) {
    (**(code **)(*this_00 + 4))(uVar2);
  }
  ExceptionList = local_c;
  return;
}

