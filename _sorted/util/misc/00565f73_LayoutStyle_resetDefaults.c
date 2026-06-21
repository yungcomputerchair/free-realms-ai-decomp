// addr: 0x00565f73
// name: LayoutStyle_resetDefaults
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LayoutStyle_resetDefaults(void * style) */

void * __fastcall LayoutStyle_resetDefaults(void *style)

{
  int iVar1;
  
                    /* Resets a large layout/style structure to default values after initializing
                       ten embedded subrecords. Evidence is the loop calling an initializer for ten
                       9-dword blocks followed by many default constants such as 0x7fffffff and
                       0xffffff. */
  iVar1 = 9;
  do {
    FUN_00564fb4();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined2 *)((int)style + 0x17c) = 0;
  *(undefined2 *)((int)style + 400) = 0;
  *(undefined2 *)((int)style + 0x19c) = 0;
  *(undefined2 *)((int)style + 0x1a8) = 0;
  *(undefined2 *)((int)style + 0x1b4) = 0;
  *(undefined4 *)((int)style + 0x1b8) = 0;
  *(undefined4 *)((int)style + 0x1bc) = 0;
  *(undefined2 *)((int)style + 0x1c0) = 0;
  *(undefined4 *)((int)style + 0x1c4) = 0;
  *(undefined4 *)((int)style + 0x1c8) = 0;
  *(undefined2 *)((int)style + 0x1cc) = 0;
  *(undefined2 *)((int)style + 0x1d4) = 0;
  *(undefined2 *)((int)style + 0x1dc) = 0;
  *(undefined2 *)((int)style + 0x1e4) = 0;
  *(undefined2 *)((int)style + 0x1ec) = 0;
  *(undefined2 *)((int)style + 500) = 0;
  *(undefined4 *)style = 0;
  *(undefined4 *)((int)style + 0x194) = 0;
  *(undefined4 *)((int)style + 0x198) = 0;
  *(undefined4 *)((int)style + 0x1a0) = 0x7fffffff;
  *(undefined4 *)((int)style + 0x1a4) = 0x7fffffff;
  *(undefined4 *)((int)style + 0x1ac) = 0;
  *(undefined4 *)((int)style + 0x1b0) = 0;
  *(undefined4 *)((int)style + 0x16c) = 0;
  *(undefined4 *)((int)style + 0x170) = 0;
  *(undefined4 *)((int)style + 0x174) = 0;
  *(undefined4 *)((int)style + 0x178) = 0;
  *(undefined4 *)((int)style + 0x180) = 0;
  *(undefined4 *)((int)style + 0x184) = 0;
  *(undefined4 *)((int)style + 0x188) = 0;
  *(undefined4 *)((int)style + 0x18c) = 0;
  *(undefined4 *)((int)style + 0x1d0) = 0;
  *(undefined4 *)((int)style + 0x1d8) = 0xffffff;
  *(undefined4 *)((int)style + 0x1e0) = 0;
  *(undefined4 *)((int)style + 0x1e8) = 0;
  *(undefined4 *)((int)style + 0x1f0) = 0xffffffff;
  *(undefined4 *)((int)style + 0x1bc) = 0;
  *(undefined4 *)((int)style + 0x1b8) = 1;
  *(undefined4 *)((int)style + 0x1c4) = 1;
  *(undefined4 *)((int)style + 0x1c8) = 1;
  return style;
}

