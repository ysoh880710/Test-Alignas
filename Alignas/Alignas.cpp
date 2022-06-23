#include <iostream>

using namespace std;

struct SUnaligned
{
    long long llValue;
    char cValue;
    long lValue0;
};

SUnaligned g_Unaligned0[3]{};
SUnaligned g_Unaligned1[3]{};
SUnaligned g_Unaligned2[3]{};

struct SAlignedAtDeclaration
{
    long long llValue;
    char cValue;
    long lValue;
};

alignas(64ull) SAlignedAtDeclaration g_AlignedAtDeclaration0[3]{};
alignas(64ull) SAlignedAtDeclaration g_AlignedAtDeclaration1[3]{};
alignas(64ull) SAlignedAtDeclaration g_AlignedAtDeclaration2[3]{};

struct alignas(64ull) SAlignedAtDefinition
{
    long long llValue;
    char cValue;
    long lValue;
};

SAlignedAtDefinition g_AlignedAtDefinition0[3]{};
SAlignedAtDefinition g_AlignedAtDefinition1[3]{};
SAlignedAtDefinition g_AlignedAtDefinition2[3]{};

int main()
{
    wcout << L"SUnaligned" << endl;
    wcout << L"sizeof\t\t:\t" << sizeof(SUnaligned) << endl;
    wcout << L"Data\t\t:\tAddress(hex)\t\tAddress(dec)\t\tAddress(dec) / 64ull\tAddress(dec) % 64ull" << endl;

    for (unsigned long long i = 0ull; i < 3ull; ++i)
    {
        wcout << L"&g_Unaligned0[" << i << L"] :\t" << &g_Unaligned0[i] << L"\t" << reinterpret_cast<unsigned long long>(&g_Unaligned0[i]) << L"\t\t" << (reinterpret_cast<unsigned long long>(&g_Unaligned0[i]) / 64ull) << L"\t\t" << (reinterpret_cast<unsigned long long>(&g_Unaligned0[i]) % 64ull) << endl;
    }

    for (unsigned long long i = 0ull; i < 3ull; ++i)
    {
        wcout << L"&g_Unaligned1[" << i << L"] :\t" << &g_Unaligned1[i] << L"\t" << reinterpret_cast<unsigned long long>(&g_Unaligned1[i]) << L"\t\t" << (reinterpret_cast<unsigned long long>(&g_Unaligned1[i]) / 64ull) << L"\t\t" << (reinterpret_cast<unsigned long long>(&g_Unaligned1[i]) % 64ull) << endl;
    }

    for (unsigned long long i = 0ull; i < 3ull; ++i)
    {
        wcout << L"&g_Unaligned2[" << i << L"] :\t" << &g_Unaligned2[i] << L"\t" << reinterpret_cast<unsigned long long>(&g_Unaligned2[i]) << L"\t\t" << (reinterpret_cast<unsigned long long>(&g_Unaligned2[i]) / 64ull) << L"\t\t" << (reinterpret_cast<unsigned long long>(&g_Unaligned2[i]) % 64ull) << endl;
    }

    wcout << endl;

    wcout << L"SAlignedAtDeclaration" << endl;
    wcout << L"sizeof\t\t\t\t:\t" << sizeof(SAlignedAtDeclaration) << endl;
    wcout << L"Data\t\t\t\t:\tAddress(hex)\t\tAddress(dec)\t\tAddress(dec) / 64ull\tAddress(dec) % 64ull" << endl;

    for (unsigned long long i = 0ull; i < 3ull; ++i)
    {
        wcout << L"&g_AlignedAtDeclaration0[" << i << L"]\t:\t" << &g_AlignedAtDeclaration0[i] << L"\t" << reinterpret_cast<unsigned long long>(&g_AlignedAtDeclaration0[i]) << L"\t\t" << (reinterpret_cast<unsigned long long>(&g_AlignedAtDeclaration0[i]) / 64ull) << L"\t\t" << (reinterpret_cast<unsigned long long>(&g_AlignedAtDeclaration0[i]) % 64ull) << endl;
    }

    for (unsigned long long i = 0ull; i < 3ull; ++i)
    {
        wcout << L"&g_AlignedAtDeclaration1[" << i << L"]\t:\t" << &g_AlignedAtDeclaration1[i] << L"\t" << reinterpret_cast<unsigned long long>(&g_AlignedAtDeclaration1[i]) << L"\t\t" << (reinterpret_cast<unsigned long long>(&g_AlignedAtDeclaration1[i]) / 64ull) << L"\t\t" << (reinterpret_cast<unsigned long long>(&g_AlignedAtDeclaration1[i]) % 64ull) << endl;
    }

    for (unsigned long long i = 0ull; i < 3ull; ++i)
    {
        wcout << L"&g_AlignedAtDeclaration2[" << i << L"]\t:\t" << &g_AlignedAtDeclaration2[i] << L"\t" << reinterpret_cast<unsigned long long>(&g_AlignedAtDeclaration2[i]) << L"\t\t" << (reinterpret_cast<unsigned long long>(&g_AlignedAtDeclaration2[i]) / 64ull) << L"\t\t" << (reinterpret_cast<unsigned long long>(&g_AlignedAtDeclaration2[i]) % 64ull) << endl;
    }

    wcout << endl;

    wcout << L"SAlignedAtDefinition" << endl;
    wcout << L"sizeof\t\t\t\t:\t" << sizeof(SAlignedAtDefinition) << endl;
    wcout << L"Data\t\t\t\t:\tAddress(hex)\t\tAddress(dec)\t\tAddress(dec) / 64ull\tAddress(dec) % 64ull" << endl;

    for (unsigned long long i = 0ull; i < 3ull; ++i)
    {
        wcout << L"&g_AlignedAtDefinition0[" << i << L"]\t:\t" << &g_AlignedAtDefinition0[i] << L"\t" << reinterpret_cast<unsigned long long>(&g_AlignedAtDefinition0[i]) << L"\t\t" << (reinterpret_cast<unsigned long long>(&g_AlignedAtDefinition0[i]) / 64ull) << L"\t\t" << (reinterpret_cast<unsigned long long>(&g_AlignedAtDefinition0[i]) % 64ull) << endl;
    }

    for (unsigned long long i = 0ull; i < 3ull; ++i)
    {
        wcout << L"&g_AlignedAtDefinition1[" << i << L"]\t:\t" << &g_AlignedAtDefinition1[i] << L"\t" << reinterpret_cast<unsigned long long>(&g_AlignedAtDefinition1[i]) << L"\t\t" << (reinterpret_cast<unsigned long long>(&g_AlignedAtDefinition1[i]) / 64ull) << L"\t\t" << (reinterpret_cast<unsigned long long>(&g_AlignedAtDefinition1[i]) % 64ull) << endl;
    }

    for (unsigned long long i = 0ull; i < 3ull; ++i)
    {
        wcout << L"&g_AlignedAtDefinition2[" << i << L"]\t:\t" << &g_AlignedAtDefinition2[i] << L"\t" << reinterpret_cast<unsigned long long>(&g_AlignedAtDefinition2[i]) << L"\t\t" << (reinterpret_cast<unsigned long long>(&g_AlignedAtDefinition2[i]) / 64ull) << L"\t\t" << (reinterpret_cast<unsigned long long>(&g_AlignedAtDefinition2[i]) % 64ull) << endl;
    }

    system("pause");

    return 0;
}