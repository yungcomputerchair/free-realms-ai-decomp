// addr: 0x00f99160
// name: FUN_00f99160
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_00f99160(void * this) */

void * __fastcall FUN_00f99160(void *this)

{
  uint uVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x400-byte buffer and initializes many connection/filter state
                       fields, including flags and pointer slots. It is SSL-adjacent but lacks a
                       vtable or class-identifying string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0162a3d8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x400);
  *(void **)((int)this + 4) = pvVar2;
  *(void **)((int)this + 8) = pvVar2;
  *(void **)((int)this + 0xc) = pvVar2;
  *(undefined4 *)((int)this + 0x10) = 0x400;
  local_4 = 0;
  FUN_00f94d00(uVar1);
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined1 *)((int)this + 0x164) = 1;
  *(undefined1 *)((int)this + 0x165) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined1 *)((int)this + 0x188) = 0;
  ExceptionList = local_c;
  return this;
}

