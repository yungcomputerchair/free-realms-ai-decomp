// addr: 0x00748310
// name: Deep_RenderTargetSet_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Deep_RenderTargetSet_ctor(void * this, char * name) */

void * __thiscall Deep_RenderTargetSet_ctor(void *this,char *name)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
                    /* Constructs a Deep::RenderTargetSet, initializes collection fields, duplicates
                       its name, and clears render-target slots/state. */
  *(undefined ***)this = Deep::RenderTargetSet::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  cVar1 = *name;
  pcVar2 = name;
  while (cVar1 != '\0') {
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  pcVar3 = Mem_Alloc((uint)(pcVar2 + (1 - (int)name)));
  pcVar2 = pcVar3 + (int)(pcVar2 + (1 - (int)name) + -1);
  *(char **)((int)this + 0x14) = pcVar3;
  if (pcVar3 != pcVar2) {
    iVar4 = (int)name - (int)pcVar3;
    do {
      if (pcVar3[iVar4] == '\0') break;
      *pcVar3 = pcVar3[iVar4];
      pcVar3 = pcVar3 + 1;
    } while (pcVar3 != pcVar2);
  }
  *pcVar3 = '\0';
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  return this;
}

