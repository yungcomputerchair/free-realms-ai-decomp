// addr: 0x005752e7
// name: LayoutStyle_copy
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LayoutStyle_copy(void * dst, void * src) */

void * __thiscall LayoutStyle_copy(void *this,void *dst,void *src)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int local_8;
  
                    /* Copies a large layout/style structure, invoking a copy helper for ten
                       embedded 9-dword subrecords and then copying scalar/default fields. Evidence
                       is the loop over ten blocks and subsequent field-by-field copy. */
  iVar4 = (int)this + 4;
  local_8 = 10;
  do {
    FUN_00566087((int)dst + (iVar4 - (int)this));
    iVar4 = iVar4 + 0x24;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  *(undefined4 *)this = *(undefined4 *)dst;
  uVar1 = *(undefined4 *)((int)dst + 0x198);
  *(undefined4 *)((int)this + 0x194) = *(undefined4 *)((int)dst + 0x194);
  *(undefined4 *)((int)this + 0x198) = uVar1;
  *(undefined2 *)((int)this + 0x19c) = *(undefined2 *)((int)dst + 0x19c);
  uVar1 = *(undefined4 *)((int)dst + 0x1a4);
  *(undefined4 *)((int)this + 0x1a0) = *(undefined4 *)((int)dst + 0x1a0);
  *(undefined4 *)((int)this + 0x1a4) = uVar1;
  *(undefined2 *)((int)this + 0x1a8) = *(undefined2 *)((int)dst + 0x1a8);
  uVar1 = *(undefined4 *)((int)dst + 0x174);
  uVar2 = *(undefined4 *)((int)dst + 0x178);
  uVar3 = *(undefined4 *)((int)dst + 0x170);
  *(undefined4 *)((int)this + 0x16c) = *(undefined4 *)((int)dst + 0x16c);
  *(undefined4 *)((int)this + 0x170) = uVar3;
  *(undefined4 *)((int)this + 0x178) = uVar2;
  *(undefined4 *)((int)this + 0x174) = uVar1;
  *(undefined2 *)((int)this + 0x17c) = *(undefined2 *)((int)dst + 0x17c);
  uVar1 = *(undefined4 *)((int)dst + 0x188);
  uVar2 = *(undefined4 *)((int)dst + 0x18c);
  uVar3 = *(undefined4 *)((int)dst + 0x184);
  *(undefined4 *)((int)this + 0x180) = *(undefined4 *)((int)dst + 0x180);
  *(undefined4 *)((int)this + 0x188) = uVar1;
  *(undefined4 *)((int)this + 0x184) = uVar3;
  *(undefined4 *)((int)this + 0x18c) = uVar2;
  *(undefined2 *)((int)this + 400) = *(undefined2 *)((int)dst + 400);
  uVar1 = *(undefined4 *)((int)dst + 0x1bc);
  *(undefined4 *)((int)this + 0x1b8) = *(undefined4 *)((int)dst + 0x1b8);
  *(undefined4 *)((int)this + 0x1bc) = uVar1;
  *(undefined2 *)((int)this + 0x1c0) = *(undefined2 *)((int)dst + 0x1c0);
  uVar1 = *(undefined4 *)((int)dst + 0x1c8);
  *(undefined4 *)((int)this + 0x1c4) = *(undefined4 *)((int)dst + 0x1c4);
  *(undefined4 *)((int)this + 0x1c8) = uVar1;
  *(undefined2 *)((int)this + 0x1cc) = *(undefined2 *)((int)dst + 0x1cc);
  *(undefined4 *)((int)this + 0x1d0) = *(undefined4 *)((int)dst + 0x1d0);
  *(undefined2 *)((int)this + 0x1d4) = *(undefined2 *)((int)dst + 0x1d4);
  *(undefined4 *)((int)this + 0x1d8) = *(undefined4 *)((int)dst + 0x1d8);
  *(undefined2 *)((int)this + 0x1dc) = *(undefined2 *)((int)dst + 0x1dc);
  *(undefined4 *)((int)this + 0x1e0) = *(undefined4 *)((int)dst + 0x1e0);
  *(undefined2 *)((int)this + 0x1e4) = *(undefined2 *)((int)dst + 0x1e4);
  *(undefined4 *)((int)this + 0x1e8) = *(undefined4 *)((int)dst + 0x1e8);
  *(undefined2 *)((int)this + 0x1ec) = *(undefined2 *)((int)dst + 0x1ec);
  *(undefined4 *)((int)this + 0x1f0) = *(undefined4 *)((int)dst + 0x1f0);
  *(undefined2 *)((int)this + 500) = *(undefined2 *)((int)dst + 500);
  return this;
}

