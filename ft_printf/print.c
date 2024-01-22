/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhromylo <mhromylo@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:01:59 by mhromylo          #+#    #+#             */
/*   Updated: 2023/11/27 12:30:37 by mhromylo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

void my_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%' && *(format + 1) == 's') {
            // Handle %s for strings
            char *str = va_arg(args, char *);
            printf("%s", str);
            format += 2;  // Move format pointer past %s
        } else {
            // Print character as is
            putchar(*format);
            format++;
        }
    }

    va_end(args);
}

int main() {
    my_printf("Hello, %s!\n", "world");
    return 0;
}
