// addr: 0x009f5a00
// name: FUN_009f5a00
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void initSmallTransformOrBoundsStruct(void * this) */

void __fastcall initSmallTransformOrBoundsStruct(void *this)

{
                    /* Initializes a small structure from two globals, clears two following fields,
                       and zeroes the first word. The owning class and exact structure role are
                       unknown. */
  *(undefined4 *)((int)this + 0x20) = DAT_01be6150;
  *(undefined4 *)((int)this + 0x24) = DAT_01be6154;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)this = 0;
  return;
}

