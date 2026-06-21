// addr: 0x007b6410
// name: FUN_007b6410
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void appendConstructedNode_480(void * owner, void * source) */

void __thiscall appendConstructedNode_480(void *this,void *owner,void *source)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a 0x50-byte node from source, then appends it to the
                       owner list at offsets 0x480/0x484 and increments the count. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0155ea7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x50);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_007cfaf0(owner);
  }
  *puVar2 = *(undefined4 *)((int)this + 0x484);
  if (*(int *)((int)this + 0x484) == 0) {
    *(undefined4 **)((int)this + 0x480) = puVar2;
  }
  else {
    *(undefined4 **)(*(int *)((int)this + 0x484) + 4) = puVar2;
  }
  *(int *)((int)this + 0x488) = *(int *)((int)this + 0x488) + 1;
  *(undefined4 **)((int)this + 0x484) = puVar2;
  ExceptionList = local_c;
  return;
}

