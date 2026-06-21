// addr: 0x008ca050
// name: Stream_ReadFixedRecordListUntilZero
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Stream_ReadFixedRecordListUntilZero(void * records, void * reader) */

void __thiscall Stream_ReadFixedRecordListUntilZero(void *this,void *records,void *reader)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
                    /* Deserializes repeated 0x28-byte records until a leading int field is zero,
                       reading a bool and several 32-bit fields per record with normal stream
                       underrun handling. Exact record class is not evident. */
  *(undefined4 *)((int)this + 4) = 0;
  while( true ) {
    piVar1 = *(int **)((int)records + 8) + 1;
    if (*(int **)((int)records + 0xc) < piVar1) {
      *(undefined1 *)((int)records + 0x10) = 1;
      *(undefined4 *)((int)records + 8) = *(undefined4 *)((int)records + 0xc);
      return;
    }
    iVar4 = **(int **)((int)records + 8);
    *(int **)((int)records + 8) = piVar1;
    if (iVar4 == 0) break;
    *(int *)(*(int *)this + *(int *)((int)this + 4) * 0x28) = iVar4;
    puVar2 = (undefined1 *)(*(int *)this + 0x10 + *(int *)((int)this + 4) * 0x28);
    if (*(char **)((int)records + 0xc) < *(char **)((int)records + 8) + 1) {
      *puVar2 = 0;
      *(undefined1 *)((int)records + 0x10) = 1;
      *(undefined4 *)((int)records + 8) = *(undefined4 *)((int)records + 0xc);
    }
    else {
      *puVar2 = **(char **)((int)records + 8) != '\0';
      *(int *)((int)records + 8) = *(int *)((int)records + 8) + 1;
    }
    puVar3 = (undefined4 *)(*(int *)this + 8 + *(int *)((int)this + 4) * 0x28);
    if (*(undefined4 **)((int)records + 0xc) < *(undefined4 **)((int)records + 8) + 1) {
      *puVar3 = 0;
      *(undefined1 *)((int)records + 0x10) = 1;
      *(undefined4 *)((int)records + 8) = *(undefined4 *)((int)records + 0xc);
    }
    else {
      *puVar3 = **(undefined4 **)((int)records + 8);
      *(int *)((int)records + 8) = *(int *)((int)records + 8) + 4;
    }
    puVar3 = (undefined4 *)(*(int *)this + 0xc + *(int *)((int)this + 4) * 0x28);
    if (*(undefined4 **)((int)records + 0xc) < *(undefined4 **)((int)records + 8) + 1) {
      *puVar3 = 0;
      *(undefined1 *)((int)records + 0x10) = 1;
      *(undefined4 *)((int)records + 8) = *(undefined4 *)((int)records + 0xc);
    }
    else {
      *puVar3 = **(undefined4 **)((int)records + 8);
      *(int *)((int)records + 8) = *(int *)((int)records + 8) + 4;
    }
    puVar3 = (undefined4 *)(*(int *)this + 4 + *(int *)((int)this + 4) * 0x28);
    if (*(undefined4 **)((int)records + 0xc) < *(undefined4 **)((int)records + 8) + 1) {
      *puVar3 = 0;
      *(undefined1 *)((int)records + 0x10) = 1;
      *(undefined4 *)((int)records + 8) = *(undefined4 *)((int)records + 0xc);
    }
    else {
      *puVar3 = **(undefined4 **)((int)records + 8);
      *(int *)((int)records + 8) = *(int *)((int)records + 8) + 4;
    }
    puVar3 = (undefined4 *)(*(int *)this + 0x14 + *(int *)((int)this + 4) * 0x28);
    if (*(undefined4 **)((int)records + 0xc) < *(undefined4 **)((int)records + 8) + 1) {
      *puVar3 = 0;
      *(undefined1 *)((int)records + 0x10) = 1;
      *(undefined4 *)((int)records + 8) = *(undefined4 *)((int)records + 0xc);
    }
    else {
      *puVar3 = **(undefined4 **)((int)records + 8);
      *(int *)((int)records + 8) = *(int *)((int)records + 8) + 4;
    }
    puVar3 = (undefined4 *)(*(int *)this + 0x18 + *(int *)((int)this + 4) * 0x28);
    if (*(undefined4 **)((int)records + 0xc) < *(undefined4 **)((int)records + 8) + 1) {
      *puVar3 = 0;
      *(undefined1 *)((int)records + 0x10) = 1;
      *(undefined4 *)((int)records + 8) = *(undefined4 *)((int)records + 0xc);
    }
    else {
      *puVar3 = **(undefined4 **)((int)records + 8);
      *(int *)((int)records + 8) = *(int *)((int)records + 8) + 4;
    }
    puVar3 = (undefined4 *)(*(int *)this + 0x1c + *(int *)((int)this + 4) * 0x28);
    if (*(undefined4 **)((int)records + 0xc) < *(undefined4 **)((int)records + 8) + 1) {
      *puVar3 = 0;
      *(undefined1 *)((int)records + 0x10) = 1;
      *(undefined4 *)((int)records + 8) = *(undefined4 *)((int)records + 0xc);
    }
    else {
      *puVar3 = **(undefined4 **)((int)records + 8);
      *(int *)((int)records + 8) = *(int *)((int)records + 8) + 4;
    }
    puVar3 = (undefined4 *)(*(int *)this + 0x20 + *(int *)((int)this + 4) * 0x28);
    if (*(undefined4 **)((int)records + 0xc) < *(undefined4 **)((int)records + 8) + 1) {
      *puVar3 = 0;
      *(undefined1 *)((int)records + 0x10) = 1;
      *(undefined4 *)((int)records + 8) = *(undefined4 *)((int)records + 0xc);
    }
    else {
      *puVar3 = **(undefined4 **)((int)records + 8);
      *(int *)((int)records + 8) = *(int *)((int)records + 8) + 4;
    }
    puVar3 = (undefined4 *)(*(int *)this + 0x24 + *(int *)((int)this + 4) * 0x28);
    if (*(undefined4 **)((int)records + 0xc) < *(undefined4 **)((int)records + 8) + 1) {
      *puVar3 = 0;
      *(undefined1 *)((int)records + 0x10) = 1;
      *(undefined4 *)((int)records + 8) = *(undefined4 *)((int)records + 0xc);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    }
    else {
      *puVar3 = **(undefined4 **)((int)records + 8);
      *(int *)((int)records + 8) = *(int *)((int)records + 8) + 4;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    }
  }
  return;
}

