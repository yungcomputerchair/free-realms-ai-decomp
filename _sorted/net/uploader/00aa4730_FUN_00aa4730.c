// addr: 0x00aa4730
// name: FUN_00aa4730
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_00aa4730(void * this) */

void * __fastcall FUN_00aa4730(void *this)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazy-allocates and caches a large 0x2260-byte object at offset 0xd0,
                       constructing it with FUN_01058860. No class evidence is visible. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015c1d1b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0xd0) == 0) {
    pvVar2 = Mem_Alloc(0x2260);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_01058860(uVar1);
    }
    *(undefined4 *)((int)this + 0xd0) = uVar3;
  }
  ExceptionList = local_c;
  return *(void **)((int)this + 0xd0);
}

