// addr: 0x00748900
// name: Deep_InputLayoutEntry_parseFormat
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Deep_InputLayoutEntry_parseFormat(char * formatName) */

int Deep_InputLayoutEntry_parseFormat(char *formatName)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
                    /* Maps vertex element format strings such as Float1-Float4, D3dcolor,
                       Short/Ushort variants, Ubyte4, Udec3, and Dec3n to internal format codes. */
  cVar1 = *formatName;
  pcVar2 = formatName;
  while (cVar1 != '\0') {
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  iVar3 = (int)pcVar2 - (int)formatName;
  if ((iVar3 < 6) || (iVar4 = FUN_00401940(formatName,"Float",5), iVar4 != 0)) {
    iVar4 = FUN_00401940(formatName,"D3dcolor",8);
    if (iVar4 == 0) {
      return 4;
    }
    if ((iVar3 < 6) || (iVar4 = FUN_00401940(formatName,"Short",5), iVar4 != 0)) {
      iVar4 = FUN_00401940(formatName,"Ubyte4",6);
      if (iVar4 == 0) {
        if ((6 < iVar3) && (formatName[6] == 'n')) {
          return 8;
        }
        return 5;
      }
      if ((iVar3 < 8) || (iVar3 = FUN_00401940(formatName,"Ushort",6), iVar3 != 0)) {
        iVar3 = FUN_00401940(formatName,"Udec3",8);
        if (iVar3 == 0) {
          return 0xd;
        }
        iVar3 = FUN_00401940(formatName,"Dec3n",8);
        if (iVar3 == 0) {
          return 0xe;
        }
      }
      else {
        if ((formatName[6] == '2') && (formatName[7] == 'n')) {
          return 0xb;
        }
        if ((formatName[6] == '4') && (formatName[7] == 'n')) {
          return 0xc;
        }
      }
    }
    else {
      if (formatName[5] == '2') {
        if ((6 < iVar3) && (formatName[6] == 'n')) {
          return 9;
        }
        return 6;
      }
      if (formatName[5] == '4') {
        if ((6 < iVar3) && (formatName[6] == 'n')) {
          return 10;
        }
        return 7;
      }
    }
  }
  else {
    switch(formatName[5]) {
    case '1':
      if ((iVar3 < 9) || (formatName[6] != '6')) {
        return 0;
      }
      if (formatName[8] == '2') {
        return 0xf;
      }
      if (formatName[8] == '4') {
        return 0x10;
      }
    case '2':
      return 1;
    case '3':
      return 2;
    case '4':
      return 3;
    }
  }
  return 0x11;
}

