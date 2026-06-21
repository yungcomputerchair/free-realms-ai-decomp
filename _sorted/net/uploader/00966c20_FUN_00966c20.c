// addr: 0x00966c20
// name: FUN_00966c20
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00966c20(void * list, int arg_) */

void __thiscall FUN_00966c20(void *this,void *list,int arg_)

{
  void *pvVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Allocates and constructs a node/object, then links it at the head of a
                       singly/doubly tracked list and increments the count. No class name is
                       available. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015967d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x24);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    FUN_006f9e60(list);
    local_4 = local_4 & 0xffffff00;
    iVar2 = FUN_00966a60();
  }
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)this;
  if (*(int **)this == (int *)0x0) {
    *(int *)((int)this + 4) = iVar2;
  }
  else {
    **(int **)this = iVar2;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  *(int *)this = iVar2;
  ExceptionList = local_c;
  return;
}

