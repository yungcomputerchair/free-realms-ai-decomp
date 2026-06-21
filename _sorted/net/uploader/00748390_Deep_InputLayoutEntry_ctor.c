// addr: 0x00748390
// name: Deep_InputLayoutEntry_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Deep_InputLayoutEntry_ctor(void * this, char * semanticName, int
   semanticValue_) */

void * __thiscall Deep_InputLayoutEntry_ctor(void *this,char *semanticName,int semanticValue_)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
                    /* Constructs a Deep::InputLayoutEntry, duplicates the semantic/name string, and
                       stores the associated value at offset 0x18. */
  *(undefined ***)this = Deep::InputLayoutEntry::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  cVar1 = *semanticName;
  pcVar2 = semanticName;
  while (cVar1 != '\0') {
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  pcVar3 = Mem_Alloc((uint)(pcVar2 + (1 - (int)semanticName)));
  pcVar2 = pcVar3 + (int)(pcVar2 + (1 - (int)semanticName) + -1);
  *(char **)((int)this + 0x14) = pcVar3;
  if (pcVar3 != pcVar2) {
    iVar4 = (int)semanticName - (int)pcVar3;
    do {
      if (pcVar3[iVar4] == '\0') break;
      *pcVar3 = pcVar3[iVar4];
      pcVar3 = pcVar3 + 1;
    } while (pcVar3 != pcVar2);
  }
  *pcVar3 = '\0';
  *(int *)((int)this + 0x18) = semanticValue_;
  return this;
}

