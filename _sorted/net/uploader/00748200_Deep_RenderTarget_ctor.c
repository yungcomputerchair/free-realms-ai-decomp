// addr: 0x00748200
// name: Deep_RenderTarget_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Deep_RenderTarget_ctor(void * this, char * name, int targetId_) */

void * __thiscall Deep_RenderTarget_ctor(void *this,char *name,int targetId_)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
                    /* Constructs a Deep::RenderTarget, initializes base/container fields,
                       duplicates the name string, and stores the render-target identifier/value. */
  *(undefined ***)this = Deep::RenderTarget::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
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
  *(int *)((int)this + 0x18) = targetId_;
  return this;
}

