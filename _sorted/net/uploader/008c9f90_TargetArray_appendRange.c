// addr: 0x008c9f90
// name: TargetArray_appendRange
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TargetArray_appendRange(int this_, void * source, int count_) */

void __thiscall TargetArray_appendRange(void *this,int this_,void *source,int count_)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Ensures capacity for count additional Target elements, advances the array
                       size, and copy-constructs each Target from the source range. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01582d51;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = *(int *)((int)this + 8) + (int)source;
  if (*(int *)((int)this + 0xc) < iVar1) {
    FUN_008ac460(iVar1,0);
  }
  puVar2 = (undefined4 *)(*(int *)((int)this + 4) + *(int *)((int)this + 8) * 8);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + (int)source;
  while (source != (void *)0x0) {
    source = (void *)((int)source + -1);
    local_4 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = Target::vftable;
      puVar2[1] = 0;
      FUN_0101c990(this_);
    }
    puVar2 = puVar2 + 2;
    this_ = this_ + 8;
  }
  ExceptionList = local_c;
  return;
}

