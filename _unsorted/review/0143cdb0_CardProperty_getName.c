// addr: 0x0143cdb0
// name: CardProperty_getName
// subsystem: common/review2
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


basic_string<char,std::char_traits<char>,std::allocator<char>_> *
CardProperty_getName
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Maps card/property ids to display names, special-casing Charges and IsPromo
                       before falling back to the general property-name resolver. */
  puStack_8 = &LAB_01697f19;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
  local_4 = 0;
  if (param_2 == 0x229e9) {
    pcVar3 = "Charges";
  }
  else if (param_2 == 0x229f8) {
    pcVar3 = "IsPromo";
  }
  else {
    pcVar3 = (char *)FUN_0143bca0(param_2,uVar2);
  }
  if (pcVar3 != (char *)0x0) {
    pcVar4 = pcVar3;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_1,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  }
  ExceptionList = local_c;
  return param_1;
}

