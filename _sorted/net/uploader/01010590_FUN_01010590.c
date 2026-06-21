// addr: 0x01010590
// name: FUN_01010590
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_01010590(void * header, int * sizePair, int formatId_) */

void __thiscall FUN_01010590(void *this,void *header,int *sizePair,int formatId_)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  
                    /* Builds a 32-byte media/header structure from global template data, selecting
                       one global code based on a format id and copying two size fields. No uploader
                       evidence is present. */
  bVar5 = DAT_01cb6084 != sizePair;
  puVar3 = &DAT_0187d248;
  puVar4 = this;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar2 = DAT_01cb60bc;
  if (bVar5) {
    uVar2 = DAT_01cb60a8;
  }
  *(undefined4 *)this = uVar2;
  *(undefined1 *)((int)this + 10) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0x18;
  *(undefined2 *)((int)this + 8) = 2;
  *(undefined1 *)((int)this + 0xb) = 1;
  *(int **)((int)this + 0x10) = sizePair;
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)header;
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)header + 4);
  return;
}

