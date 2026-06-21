// addr: 0x0123a340
// name: Audio_CloneWarsAudioService_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 * Audio_CloneWarsAudioService_ctor(undefined4 * this) */

undefined4 * __fastcall Audio_CloneWarsAudioService_ctor(undefined4 *this)

{
  char *pcVar1;
  char *local_ac;
  undefined1 local_69;
  undefined1 *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 *local_58;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 *local_34;
  undefined1 local_19;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Constructs Audio::CloneWarsAudioService, initializes embedded
                       strings/containers, sets default loop name to "MX_SD_Loop_1", and runs
                       follow-up audio setup helpers. */
  local_8 = 0xffffffff;
  puStack_c = &LAB_01652f3d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_012f87e0(DAT_01b839d8 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *this = Audio::CloneWarsAudioService::vftable;
  local_34 = this + 2;
  local_18 = &local_19;
  FUN_0041ba81(0,0);
  local_8._0_1_ = 1;
  local_58 = this + 9;
  FUN_0123ac60(&local_36,&local_35);
  local_8._0_1_ = 3;
  this[0xc] = 0;
  this[0xd] = 0;
  local_68 = &local_69;
  local_64 = 0;
  local_60 = 0;
  FUN_0123ad50(0,&local_64);
  local_8 = CONCAT31(local_8._1_3_,4);
  local_ac = "MX_SD_Loop_1";
  pcVar1 = local_ac;
  do {
    local_ac = pcVar1;
    pcVar1 = local_ac + 1;
  } while (*local_ac != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + 2),
             "MX_SD_Loop_1",(uint)(local_ac + -0x18c85c8));
  FUN_0123a9e0();
  FUN_0123a9f0();
  ExceptionList = local_10;
  return this;
}

