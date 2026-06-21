// addr: 0x00912cf0
// name: SelfObject_ClientPcData_deserialize
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SelfObject_ClientPcData_deserialize(void * this, void * reader) */

void __thiscall SelfObject_ClientPcData_deserialize(void *this,void *reader)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
                    /* Large streamed client/player data parser: reads ints, bools, float vectors
                       with NaN checks, strings, and nested collections, then stores them into a
                       large record. Called directly by SelfObject_ParseFromBlob. */
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)this = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)this = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  }
  if (*(char **)((int)reader + 0xc) < *(char **)((int)reader + 8) + 1) {
    *(undefined1 *)((int)this + 4) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(bool *)((int)this + 4) = **(char **)((int)reader + 8) != '\0';
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 1;
  }
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 8) = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  }
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x20) = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
    if (NAN(*(float *)((int)this + 0x20))) {
      *(undefined1 *)((int)reader + 0x11) = 1;
    }
  }
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x24) = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
    if (NAN(*(float *)((int)this + 0x24))) {
      *(undefined1 *)((int)reader + 0x11) = 1;
    }
  }
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x28) = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
    if (NAN(*(float *)((int)this + 0x28))) {
      *(undefined1 *)((int)reader + 0x11) = 1;
    }
  }
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x2c) = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
    if (NAN(*(float *)((int)this + 0x2c))) {
      *(undefined1 *)((int)reader + 0x11) = 1;
    }
  }
  if (*(char **)((int)reader + 0xc) < *(char **)((int)reader + 8) + 1) {
    *(undefined1 *)((int)this + 0x30) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(bool *)((int)this + 0x30) = **(char **)((int)reader + 8) != '\0';
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 1;
  }
  FUN_008fcdb0(reader,(int)this + 0x34);
  FUN_008db130(reader,(int)this + 0xbc);
  Stream_ReadU32PairCollection(reader,(void *)((int)this + 0xe4));
  piVar2 = *(int **)((int)reader + 0xc);
  piVar1 = *(int **)((int)reader + 8) + 1;
  if (piVar2 < piVar1) {
    iVar4 = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(int **)((int)reader + 8) = piVar2;
LAB_00912eb0:
    if (piVar2 < (int *)(*(int *)((int)reader + 8) + iVar4)) goto LAB_00912ec9;
    SoeString_Assign(*(int *)((int)reader + 8),iVar4);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + iVar4;
  }
  else {
    iVar4 = **(int **)((int)reader + 8);
    *(int **)((int)reader + 8) = piVar1;
    if (-1 < iVar4) goto LAB_00912eb0;
LAB_00912ec9:
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(int **)((int)reader + 8) = piVar2;
  }
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x1c) = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  }
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 0x100) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x100) = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  }
  piVar2 = *(int **)((int)reader + 0xc);
  piVar1 = *(int **)((int)reader + 8) + 1;
  if (piVar2 < piVar1) {
    iVar4 = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(int **)((int)reader + 8) = piVar2;
LAB_00912f41:
    if ((int *)(*(int *)((int)reader + 8) + iVar4) <= piVar2) {
      SoeString_Assign(*(int *)((int)reader + 8),iVar4);
      *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + iVar4;
      goto LAB_00912f63;
    }
  }
  else {
    iVar4 = **(int **)((int)reader + 8);
    *(int **)((int)reader + 8) = piVar1;
    if (-1 < iVar4) goto LAB_00912f41;
  }
  *(undefined1 *)((int)reader + 0x10) = 1;
  *(int **)((int)reader + 8) = piVar2;
LAB_00912f63:
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 0xfc) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0xfc) = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  }
  if (*(char **)((int)reader + 0xc) < *(char **)((int)reader + 8) + 1) {
    *(undefined1 *)((int)this + 0x104) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(bool *)((int)this + 0x104) = **(char **)((int)reader + 8) != '\0';
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 1;
  }
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 0x118) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x118) = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  }
  if (*(char **)((int)reader + 0xc) < *(char **)((int)reader + 8) + 1) {
    *(undefined1 *)((int)this + 0x11c) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(bool *)((int)this + 0x11c) = **(char **)((int)reader + 8) != '\0';
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 1;
  }
  puVar3 = (undefined4 *)((int)this + 0x88);
  iVar4 = 4;
  do {
    if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
      *puVar3 = 0;
      *(undefined1 *)((int)reader + 0x10) = 1;
      *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
    }
    else {
      *puVar3 = **(undefined4 **)((int)reader + 8);
      *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
    }
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar3 = (undefined4 *)((int)this + 0x98);
  iVar4 = 8;
  do {
    if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
      *puVar3 = 0;
      *(undefined1 *)((int)reader + 0x10) = 1;
      *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
    }
    else {
      *puVar3 = **(undefined4 **)((int)reader + 8);
      *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
    }
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

