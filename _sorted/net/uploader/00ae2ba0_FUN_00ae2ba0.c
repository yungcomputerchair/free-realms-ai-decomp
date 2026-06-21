// addr: 0x00ae2ba0
// name: FUN_00ae2ba0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00ae2ba0(void * pool) */

void __fastcall FUN_00ae2ba0(void *pool)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Pre-populates two free lists: 100 constructed 0x68-byte objects and 400
                       string-fixed 0x9c-byte records. No class name is visible. */
  puStack_8 = &LAB_015cb971;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = 100;
  do {
    local_4 = 0xffffffff;
    pvVar2 = Mem_Alloc(0x68);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = FUN_00ae2a10(pvVar2,(void *)0x0);
    }
    *(undefined4 *)((int)pvVar2 + 0x54) = *(undefined4 *)((int)pool + 8);
    if (*(int *)((int)pool + 8) == 0) {
      *(void **)((int)pool + 4) = pvVar2;
    }
    else {
      *(void **)(*(int *)((int)pool + 8) + 0x58) = pvVar2;
    }
    *(void **)((int)pool + 8) = pvVar2;
    *(undefined4 *)((int)pvVar2 + 0x50) = 0;
    *(undefined4 *)((int)pvVar2 + 0x4c) = *(undefined4 *)((int)pool + 0x10);
    *(void **)((int)pool + 0x10) = pvVar2;
    *(int *)((int)pool + 0xc) = *(int *)((int)pool + 0xc) + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_18 = 400;
  do {
    local_4 = 0xffffffff;
    puVar3 = Mem_Alloc(0x9c);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar1 = puVar3 + 2;
      *puVar3 = 0;
      puVar3[1] = 0;
      *puVar1 = SoeUtil::IString<char>::vftable;
      puVar3[3] = &DAT_01be834c;
      puVar3[5] = 0;
      puVar3[4] = 0;
      *puVar1 = SoeUtil::IStringFixed<char,128>::vftable;
      *puVar1 = SoeUtil::StringFixed<128>::vftable;
    }
    *puVar3 = *(undefined4 *)((int)pool + 0x1a4);
    if (*(int *)((int)pool + 0x1a4) == 0) {
      *(undefined4 **)((int)pool + 0x1a0) = puVar3;
    }
    else {
      *(undefined4 **)(*(int *)((int)pool + 0x1a4) + 4) = puVar3;
    }
    *(int *)((int)pool + 0x1a8) = *(int *)((int)pool + 0x1a8) + 1;
    local_18 = local_18 + -1;
    *(undefined4 **)((int)pool + 0x1a4) = puVar3;
  } while (local_18 != 0);
  ExceptionList = local_c;
  return;
}

