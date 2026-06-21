// addr: 0x007cd960
// name: SoundManager_createNullSoundDefinition
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x007cdbbe) */
/* WARNING: Removing unreachable block (ram,0x007cdbc2) */
/* WARNING: Removing unreachable block (ram,0x007cdc1b) */
/* WARNING: Removing unreachable block (ram,0x007cdc24) */
/* WARNING: Removing unreachable block (ram,0x007cdce0) */
/* WARNING: Removing unreachable block (ram,0x007cdce9) */
/* WARNING: Removing unreachable block (ram,0x007cdd14) */
/* WARNING: Removing unreachable block (ram,0x007cdd1d) */
/* WARNING: Removing unreachable block (ram,0x007cdd48) */
/* WARNING: Removing unreachable block (ram,0x007cdd51) */
/* WARNING: Removing unreachable block (ram,0x007cdd7c) */
/* WARNING: Removing unreachable block (ram,0x007cdd85) */
/* WARNING: Removing unreachable block (ram,0x007cddb0) */
/* WARNING: Removing unreachable block (ram,0x007cddb9) */
/* WARNING: Removing unreachable block (ram,0x007cde5a) */

void __fastcall SoundManager_createNullSoundDefinition(int param_1)

{
  undefined1 *puVar1;
  void *pvVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Builds an in-memory null WAV/sound resource using embedded Pro Tools and
                       region data, constructs a SoundDefinition named "<NullSound>.wav", stores it
                       at offset 0x85c, and registers it. Evidence is the referenced
                       "<NullSound>.wav", "Pro Tools", and SoundDefinition_ctor. */
  puStack_8 = &LAB_015615e3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  puVar1 = (undefined1 *)FUN_007cb900(0x1487);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  Stream_AppendBytes(0,&DAT_017f03d8,0x12);
  Stream_AppendBytes(0x114,"Pro Tools",9);
  Stream_AppendBytes(0x134,"zvFGHt85oajaaaGk",0x10);
  Stream_AppendBytes(0x154,&DAT_017f03a0,0x14);
  Stream_AppendBytes(0x26e,&DAT_017f0368,0x36);
  Stream_AppendBytes(0x3f8,&DAT_017f0360,6);
  iVar3 = 0xfc0;
  FUN_00701cc0(0x13c0,0);
  puVar1 = (undefined1 *)0x400;
  do {
    iVar3 = iVar3 + -1;
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0x80;
    }
    puVar1 = puVar1 + 1;
  } while (iVar3 != 0);
  Stream_AppendBytes(0x13c0,"regn\\",5);
  FUN_00701cc0(0x13c9,0);
  uRam000013c8 = 1;
  FUN_00701cc0(0x13d1,0);
  uRam000013d0 = 0x2a;
  Stream_AppendBytes(0x13d4,&DAT_017f034c,8);
  FUN_00701cc0(0x13e5,0);
  uRam000013e4 = 0xc0;
  FUN_00701cc0(0x13e6,0);
  uRam000013e5 = 0xf;
  FUN_00701cc0(0x13fd,0);
  uRam000013fc = 0x2b;
  uRam000013f4 = 0x2b;
  FUN_00701cc0(0x13fe,0);
  uRam000013fd = 0x83;
  uRam000013f5 = 0x83;
  Stream_AppendBytes(0x1404,&DAT_017f0340,8);
  FUN_00701cc0(0x1412,0);
  uRam00001411 = 2;
  Stream_AppendBytes(0x1414,&DAT_017f0328,0x15);
  FUN_00701cc0(0x1441,0);
  uRam00001440 = 1;
  uRam00001439 = 1;
  uRam00001434 = 1;
  uRam00001430 = 0x38;
  uRam0000142c = 1;
  uRam0000143c = 8;
  FUN_00701cc0(0x1445,0);
  uRam00001444 = 0x10;
  Stream_AppendBytes(0x1468,&DAT_017f0320,5);
  Stream_AppendBytes(0x1474,&DAT_017f0310,0xc);
  pvVar2 = Mem_Alloc(0x30);
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    local_4._0_1_ = 1;
    pvVar2 = SoundDefinition_ctor(pvVar2);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(void **)(param_1 + 0x85c) = pvVar2;
  (**(code **)(**(int **)(param_1 + 4) + 4))(pvVar2);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00401c00(SoeUtil::Array<unsigned_char,0,1>::vftable,1);
  ExceptionList = (void *)0x0;
  return;
}

