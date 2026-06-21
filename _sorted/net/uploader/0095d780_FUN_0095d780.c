// addr: 0x0095d780
// name: FUN_0095d780
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_0095d780(void * player, char flags_, bool ensureInit_, char
   extraFlags_) */

void * __thiscall
FUN_0095d780(void *this,void *player,char flags_,bool ensureInit_,char extraFlags_)

{
  void *pvVar1;
  int iVar2;
  void *value_;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a large player-related object from player fields, optionally
                       ensuring initialization first and applying an extra setup step when
                       requested. Specific class is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015957db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (flags_ != '\0') {
    FUN_0095d6c0(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  }
  pvVar1 = Mem_Alloc(0x18c);
  value_ = (void *)0x0;
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    if (this == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)this + 0x54;
    }
    value_ = (void *)FUN_00bf6d60(*(undefined4 *)((int)this + 0x58),
                                  *(undefined4 *)((int)this + 0x734),iVar2,
                                  (byte)player | ensureInit_,*(undefined4 *)((int)this + 0x5a4),
                                  *(undefined4 *)((int)this + 0x5d4),
                                  *(undefined4 *)((int)this + 0x6ec),
                                  *(undefined4 *)(*(int *)((int)this + 0x738) + 0x13c));
  }
  local_4 = 0xffffffff;
  FUN_0072c400(value_);
  if (ensureInit_) {
    FUN_00bf11c0((int)value_);
  }
  ExceptionList = local_c;
  return value_;
}

