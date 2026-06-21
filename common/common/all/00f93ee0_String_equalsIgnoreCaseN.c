// addr: 0x00f93ee0
// name: String_equalsIgnoreCaseN
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool String_equalsIgnoreCaseN(char * leftString, char * rightString, uint
   maxCount_) */

bool __cdecl String_equalsIgnoreCaseN(char *leftString,char *rightString,uint maxCount_)

{
  int iVar1;
  
                    /* Returns true when the two strings compare equal for maxCount characters using
                       case-insensitive comparison. */
  iVar1 = __strnicmp(leftString,rightString,maxCount_);
  return (bool)('\x01' - (iVar1 != 0));
}

